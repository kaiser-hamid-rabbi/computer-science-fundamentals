from PIL import Image

img = Image.open("angel.jpg") # img is a pillow object
print(img.size)
print(img.format)

img.show()