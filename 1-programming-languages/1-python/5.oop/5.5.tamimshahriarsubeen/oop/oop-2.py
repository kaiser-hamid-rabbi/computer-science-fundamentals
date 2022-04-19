"""
======================
Inheritance
======================
"""
# # Parent/Base class and Child/Derived class
# class Vehicle:
#     """ Base class for all vehicles """
#     def __init__(self, name, manufacturer, color):
#         self.name = name
#         self.manufacturer = manufacturer
#         self.color = color
#     def drive(self):
#         print(f"Driving {self.manufacturer} {self.name}.")
#     def turn(self, direction):
#         print(f"Turning {self.name} to {direction}.")
#     def brake(self):
#         print(f"{self.name} is stopping!")

# if __name__ == "__main__":
#     v1 = Vehicle("Fusion 110 EX", "Walton", "Black")
#     v2 = Vehicle("Softail Delux", "Harley-Davidson", "Blue")
#     v3 = Vehicle("Mustang 5.0 GT Coupe", "Ford", "Red")

#     v1.drive()
#     v2.drive()
#     v3.drive()

#     v1.turn("left")
#     v2.turn("right")

#     v1.brake()
#     v2.brake()
#     v3.brake()

# # Continue - 1
# class Vehicle:
#     """ Base class for all vehicles """
#     def __init__(self, name, manufacturer, color):
#         self.name = name
#         self.manufacturer = manufacturer
#         self.color = color
#     def drive(self):
#         print(f"Driving {self.manufacturer} {self.name}.")
#     def turn(self, direction):
#         print(f"Turning {self.name} to {direction}.")
#     def brake(self):
#         print(f"{self.name} is stopping!")

# class Car(Vehicle):
#     """ Car class """
#     def change_gear(self, gear_name):
#         """ Method for changing gear """
#         print(f"{self.name} is changing gear to {gear_name}")

# if __name__ == "__main__":
#     c = Car("Mustang 5.0 GT Coupe", "Ford", "Red")
#     c.drive()
#     c.brake()
#     c.change_gear("P")

#     ob = object()
#     print(type(ob))

# # Continue - 2
# class Vehicle:
#     """ Base class for all vehicles """
#     def __init__(self, name, manufacturer, color):
#         self.name = name
#         self.manufacturer = manufacturer
#         self.color = color
#     def drive(self):
#         print(f"Driving {self.manufacturer} {self.name}.")
#     def turn(self, direction):
#         print(f"Turning {self.name} to {direction}.")
#     def brake(self):
#         print(f"{self.name} is stopping!")

# class Car(Vehicle):
#     """ Car class """
#     def __init__(self, name, manufacturer, color, year):
#         super().__init__(name, manufacturer, color)
#         self.year = year
#         self.wheels = 4
#         print(f"A new car has been created. Name: {self.name}.")
#         print(f"It has {self.wheels} wheels and was built in {self.year}")
#     def change_gear(self, gear_name):
#         """ Method for changing gear """
#         print(f"{self.name} is changing gear to {gear_name}")

# if __name__ == "__main__":
#     c = Car("Mustang 5.0 GT Coupe", "Ford", "Red", 2017)

# # Continue - 3
# class Vehicle:
#     """ Base class for all vehicles """
#     def __init__(self, name, manufacturer, color):
#         self.name = name
#         self.manufacturer = manufacturer
#         self.color = color
#     def turn(self, direction):
#         print(f"Turning {self.name} to {direction} from Vehicle class.")

# class Car(Vehicle):
#     """ Car class """
#     def __init__(self, name, manufacturer, color, year):
#         super().__init__(name, manufacturer, color)
#         self.year = year
#         self.wheels = 4
#         print(f"A new car has been created. Name: {self.name}.")
#         print(f"It has {self.wheels} wheels and was built in {self.year}.")
#     def change_gear(self, gear_name):
#         """ Method for changing gear """
#         print(f"{self.name} is changing gear to {gear_name}")
#     def turn(self, direction):
#         print(f"Turning {self.name} to {direction} from Car class.")

# if __name__ == "__main__":
#     c = Car("Mustang 5.0 GT Coupe", "Ford", "Red", 2017)
#     v = Vehicle("Softail Delux", "Harley-Davidson", "Blue")

#     c.turn("right")
#     v.turn("right")