"""
======================
Class
======================
"""
# # Way - 1
# class Car:
#     name = "premio" # class attribute
#     color = "white" # class attribute
#     def start():
#         print("starting the engine...")

# print("name of the car: ", Car.name)
# print("color of the car: ", Car.color)
# Car.start()

# # Way - 2
# class Car:
#     name = ""
#     color = ""
#     def start():
#         print("starting the engine...")

# Car.name = "axio"
# Car.color = "black"
# print("name of the car: ", Car.name)
# print("color of the car: ", Car.color)
# Car.start()
# print(dir(Car)) # 'name', 'color', 'start'

"""
======================
Object
======================
"""
# class Car:
#     name = ""
#     color = ""
#     def start(self):
#         print("starting the engine...")

# my_car = Car()
# my_car.name = "allion"
# my_car.color = "blue"
# print(my_car.name)
# print(my_car.color)
# my_car.start()

"""
======================
Constructor
======================
"""
class Car:
    # constructor
    def __init__(self, name, color):
        self.name = name # instance attribute
        self.color = color # instance attribute
    def start(self):
        print("name: ", self.name)
        print("color: ", self.color)
        print("starting the engine...")

my_car = Car("corolla", "white")
print(my_car. name)
print(my_car.color)
my_car.start()