# import turtle

# class WeirdTurtle(turtle.Turtle):
#     """ WeirdTurtle is a class for new type of turtle """
#     pass

# if __name__ == "__main__":
#     shelly = WeirdTurtle()
#     print(type(shelly))
#     shelly.left(90) # angle
#     shelly.forward(200) # pixel
#     turtle.done()

# Continue - 1
import turtle

class WeirdTurtle(turtle.Turtle):
    """ WeirdTurtle is a class for new type of turtle """
    def forward(self, pixel):
        super().backward(pixel)
    def backward(self, pixel):
        super().forward(pixel)
    def left(self, angle):
        super().right(angle)
    def right(self, angle):
        print(f"I won't turn right, because I am Weird!")

if __name__ == "__main__":
    shelly = WeirdTurtle()
    shelly.left(30)
    shelly.forward(200)
    shelly.left(45)
    shelly.backward(100)
    shelly.right(90)
    shelly.forward(10)

    speedy = turtle.Turtle()
    speedy.shape("turtle")
    speedy.left(30)
    speedy.forward(200)
    speedy.left(45)
    speedy.backward(100)
    speedy.right(90)
    speedy.forward(10)

    turtle.done()