from PIL import Image

angel = Image.open("angel.jpg")

print(angel.mode)

r, g, b = angel.split()
# r.show()
# g.show()
b.show()