import cv2

img = cv2.imread("lowercase.png");

f = open("lowercaseRGB888.txt", "w+")

for i in range(img.shape[0]):
    for j in range(img.shape[1]):
        for ch in range(3):
            f.write(str(img[i, j, ch]) + "\t");
        f.write("\n");

f.close()
            


