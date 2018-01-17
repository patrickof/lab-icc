import cv2;
import numpy as np;
 
# Read image
im_in = cv2.imread("bbb.TIF", cv2.IMREAD_GRAYSCALE);
 
th, im_th = cv2.threshold(im_in, 99, 255, cv2.THRESH_BINARY);


# Copy the thresholded image.
im_floodfill = im_th.copy()
 
h, w = im_th.shape[:100]
mask = np.zeros((h+2, w+2), np.uint8)
 
# Floodfill from point (0, 0)
cv2.floodFill(im_floodfill, mask, (0,0), 0);
 
# Invert floodfilled image
im_floodfill_inv = cv2.bitwise_not(im_floodfill)
 
# Combine the two images to get the foreground.
im_out = im_th & im_floodfill_inv

cv2.imwrite('newnew.tif', im_out) 
# Display images.
cv2.namedWindow('Foreground', cv2.WINDOW_NORMAL)
cv2.imshow("Foreground", im_out)
cv2.waitKey(0)
