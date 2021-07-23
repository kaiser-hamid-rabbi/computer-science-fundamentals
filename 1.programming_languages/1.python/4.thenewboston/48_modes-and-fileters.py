# from PIL import Image

# doggo = Image.open("doggo.jpg")
# print(doggo.size)
# black_white = doggo.convert("L") # luminense, basically for black and white
# # black_white = doggo.convert("CMYK")

# black_white.show()


from PIL import Image
from PIL import ImageFilter

ziraf = Image.open("ziraf.jpg")
blur_ziraf = ziraf.filter(ImageFilter.BLUR)
detail_ziraf = ziraf.filter(ImageFilter.DETAIL)
edges_ziraf = ziraf.filter(ImageFilter.FIND_EDGES)

edges_ziraf.show()