from copy import copy
import cv2
import numpy as np

__author__ = 'Colton McEntee'

# Helper function
def nothing(*arg):
    pass

#
# Commandline options
#
from optparse import OptionParser
parser = OptionParser()
parser.set_description("Counts cells in an image using the template single_yeast_zoom_near.jpg and binary thresholding.")
parser.add_option("-i", "--image", dest="imageFileName", action="store", metavar="FILE", help="input image")
parser.add_option("-g", "--gui", dest="gui", action="store_true", default=False, help="display gui")

(options, args) = parser.parse_args()
display_gui = options.gui is not None

#
# Script behavior
#
process_name = "Binary Theshold"
threshold_trackbar_name = "Threshold"
WHITE = [255,255,255]
font = cv2.FONT_HERSHEY_SIMPLEX


image = cv2.imread('newnew.tif', cv2.IMREAD_GRAYSCALE)
mask = np.zeros(image.shape, np.uint8)

#
# Binary Thresholding
#
cv2.namedWindow(process_name, cv2.WINDOW_NORMAL)
cv2.imshow(process_name, mask)
cv2.createTrackbar(threshold_trackbar_name, process_name, 80, 255, nothing)

#
# Template matching
#
template = cv2.imread("single_yeast_zoom_near.jpg", cv2.IMREAD_GRAYSCALE)
template_result = cv2.matchTemplate(image, template, cv2.TM_SQDIFF_NORMED)
matched_image = np.array(template_result * 255, dtype=np.uint8)

# Gui loop
while True:
    # Threshold the template mask result based on user input
    threshold = cv2.getTrackbarPos(threshold_trackbar_name, process_name)
    _, mask = cv2.threshold(matched_image, threshold, 255, cv2.THRESH_BINARY_INV)
    img = cv2.copyMakeBorder(copy(mask),1,1,1,1,cv2.BORDER_CONSTANT,value=WHITE) 

    # Find contours of the threshold
    image,contours, _ = cv2.findContours(copy(img), cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE)

    contornos = []

    for contour in contours:
        ar = cv2.contourArea(contour)
        if ar>600 and ar<5000:
            contornos.append(contour)  # offset the template match which returns the match quality at the corner, not center (opencv is shitty)

    # Draw the center of each contour onto the image
    image_copy = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
    cv2.drawContours(image_copy, contornos, -1, (0, 0, 255), 3)

    x = str(len(contornos))
    cv2.putText(image_copy,x,(2280,500), font, 4,(0,255,0),2,cv2.LINE_AA)
   
    # Display the image
    cv2.namedWindow(process_name, cv2.WINDOW_NORMAL)
    cv2.imshow(process_name, image_copy)
    

    # Only show one step of this loop if there's no gui
    if not display_gui:
        break

    # Exit on user pressing escape key
    key = cv2.waitKey(5)
    if key == 27: #escape key
        break

cv2.destroyAllWindows()
