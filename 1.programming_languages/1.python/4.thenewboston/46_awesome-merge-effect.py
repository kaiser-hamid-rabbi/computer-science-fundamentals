# from PIL import Image

# angel = Image.open("angel.jpg")

# r, g, b = angel.split()

# # new_img = Image.merge("RGB", (r, g, b))
# # new_img = Image.merge("RGB", (b, g, r)) # change the order of the channels
# new_img = Image.merge("RGB", (g, b, r))

# new_img.show()


from PIL import Image

angel = Image.open("angel.jpg")
doggo = Image.open("doggo.jpg")

print(angel.size)
print(doggo.size)

r1, g1, b1 = angel.split()
r2, g2, b2 = doggo.split()

new_image = Image.merge("RGB", (r2, g1, b2))

new_image.show()