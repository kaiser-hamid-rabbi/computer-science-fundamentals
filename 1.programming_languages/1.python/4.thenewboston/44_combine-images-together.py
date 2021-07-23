from PIL import Image

doggo = Image.open("doggo.jpg")
ziraf = Image.open("ziraf.jpg")

print(doggo.size)
print(ziraf.size)

area = (300, 300)
doggo.paste(ziraf, area)

doggo.show()