from PIL import Image

img = Image.open("doggo.jpg") # img is a pillow object
area = (100, 100, 800, 800)
cropped_img = img.crop(area)

# img.show()
print(img.size)
print(cropped_img.size)
cropped_img.show()