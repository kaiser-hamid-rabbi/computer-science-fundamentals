from PIL import Image

penguin = Image.open("penguin.jpg")
# print(penguin.size) # (605, 681)
square_penguin = penguin.resize((250, 250))
# flip_penguin = penguin.transpose(Image.FLIP_LEFT_RIGHT)
flip_penguin = penguin.transpose(Image.FLIP_TOP_BOTTOM)
spin_penguin = penguin.transpose(Image.ROTATE_90)

spin_penguin.show()