class Customer:
    def __init__(self, name, membership_type):
        self.name = name
        self.membership_type = membership_type

# c1 = Customer("Kaiser Hamid", "Gold")
# print(f"First Customer name: {c1.name}, Customer Membership type: {c1.membership_type}")
#
# c2 = Customer("Caleb Curry", "Bronze")
# print(f"Second Customer name: {c2.name}, Customer Membership type: {c2.membership_type}")

customers = [Customer("Kaiser Hamid", "Gold"),
             Customer("Caleb Curry", "Bronze")]
print(customers[0].name)
print(customers[0].membership_type)
print(customers[1].name)
print(customers[1].membership_type)