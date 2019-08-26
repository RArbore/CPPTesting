import numpy as np
from cv2 import cv2

def checkArrays(ar1, ar2):
    if len(ar1) != len(ar2):
        return False
    for a, b in zip(ar1, ar2):
        if a != b:
            return False
    return True

def colorToType(color):
    if checkArrays(color, [255, 255, 255]):
        return 0
    elif checkArrays(color, [0, 0, 0]):
        return 1
    elif checkArrays(color, [0, 255, 0]):
        return 2

img = cv2.imread('maps/map2.png', cv2.IMREAD_COLOR)

output = ''
output += str(len(img[0]))+","+str(len(img))
for x in range(0, len(img)):
    for y in range(0, len(img[0])):
        output += ","+str(colorToType(img[x][y]))

f = open("maps/map2.csv", "w+")
f.write(output)
f.close()