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
# # way - 1
# class Car:
#     # constructor
#     def __init__(self, name, color):
#         self.name = name # instance attribute
#         self.color = color # instance attribute
#     def start(self):
#         print("name: ", self.name)
#         print("color: ", self.color)
#         print("starting the engine...")

# my_car = Car("corolla", "white")
# print(my_car. name)
# print(my_car.color)
# my_car.start()

# # way - 2
# class Car:
#     # constructor
#     def __init__(self, name, color):
#         self.name = name # instance attribute
#         self.color = color # instance attribute
#     def start(self):
#         print("name: ", self.name)
#         print("color: ", self.color)
#         print("starting the engine...")

# my_car = Car("corolla", "white")
# Car.start(my_car)

"""
=========================
Multiple object creation
=========================
"""
class Car:
    def __init__(self, name, color):
        self.name = name
        self.color = color
    def start(self):
        print("name: ", self.name)
        print("color: ", self.color)
        print("starting the engine...")

# my_car1 = Car("corolla", "white")
# my_car1.start()
# my_car2 = Car("premio", "black")
# my_car2.start()
# my_car3 = Car("allion", "blue")
# my_car3.start()

car = Car("axio", "red")
car.year = 2017
print(f"name: {car.name}, color: {car.color}, year: {car.year}")