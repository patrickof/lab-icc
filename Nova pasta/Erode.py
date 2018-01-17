import cv2
import numpy as np

img = cv2.imread('newnew.TIF',0)
kernel = np.ones((1,1),np.uint8)
dilate = cv2.dilate(img,kernel,iterations = 1000)

cv2.imwrite('newnewnew.tif', dilate)

    
cv2.namedWindow('image', cv2.WINDOW_NORMAL)
cv2.namedWindow('erode', cv2.WINDOW_NORMAL)
cv2.imshow('image',img)
cv2.imshow('erode',dilate)
cv2.waitKey(0)
cv2.destroyAllWindows()
