import time
import timeit
import cv2
import numpy as np
from copy import copy

img = cv2.imread('ccc.TIF',0)
image,contours, _ = cv2.findContours(copy(img), cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE)

import time
import timeit


def alguma_funcao():
    for i in range(1, 5):
        time.sleep(1)

inicio = timeit.default_timer()
alguma_funcao()
fim = timeit.default_timer()
print ('duracao: %f' % (fim - inicio))
