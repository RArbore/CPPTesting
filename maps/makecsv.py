import numpy as np
import sys
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
        return 0 #Air
    elif checkArrays(color, [0, 0, 0]):
        return 1 #Ground
    elif checkArrays(color, [0, 255, 0]):
        return 2 #Player
    elif checkArrays(color, [0, 128, 255]):
        return 3 #Cracked Block
    elif checkArrays(color, [255, 128, 128]):
        return 4 #Chest Monster
    elif checkArrays(color, [0, 255, 255]):
        return 5 #Coin
    elif checkArrays(color, [128, 255, 128]):
        return 6 #Dragon
    elif checkArrays(color, [255, 255, 128]):
        return 7 #Mini Troll

img = cv2.imread('map'+str(sys.argv[1])+'.png', cv2.IMREAD_COLOR)

output = ''
output += str(len(img[0]))+","+str(len(img))
for x in range(0, len(img)):
    for y in range(0, len(img[0])):
        output += ","+str(colorToType(img[x][y]))

f = open("map"+str(sys.argv[1])+".csv", "w+")
f.write(output)
f.close()