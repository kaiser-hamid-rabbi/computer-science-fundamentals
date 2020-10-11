class Car:
    name = 'Premio'
    color = "Black"

    def start():
        print("Starting engine... ")

print(f"Name of the Car: {Car.name}")
print(f"Name of the Car: {Car.color}")

Car.start()

print(dir(Car))