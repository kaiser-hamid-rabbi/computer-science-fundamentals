class Customer:
    def __init__(self, name, membership_type): # name and membership_type are parameters
        self.name = name
        self.membership_type = membership_type

    def upgrade_membership(self, new_membership):
        print("Calculating costs!")
        self.membership_type = new_membership

    # def read_customer(): # static method
    #     print("Reading customer from DB!")

    def __str__(self):
        # print("converting to string!")
        return self.name + " " + self.membership_type

    def print_all_customer(customers):
        for customer in customers:
            print(customer)

    def __eq__(self, other): # if we don't overwrite this function, than it will compare the memory location of the object
        if self.name == other.name and self.membership_type == other.membership_type:
            return True
        return False
    __hash__ = None
    __repr__ = __str__



# c1 = Customer("Kaiser Hamid", "Gold") # name and membership_type are arguments
# print(f"First Customer name: {c1.name}, Customer Membership type: {c1.membership_type}")
#
# c2 = Customer("Caleb Curry", "Bronze") # name and membership_type are arguments
# print(f"Second Customer name: {c2.name}, Customer Membership type: {c2.membership_type}")

customers = [Customer("Kaiser Hamid", "Gold"),
             Customer("Caleb Curry", "Bronze"),
             Customer("Kaiser Hamid", "Gold")]
# print(customers[0].name)
# print(customers[0].membership_type)
# print(customers[1].name)
# print(customers[1].membership_type)

# customers[1].verified = False
# print(customers[1].verified)

# print(customers[1].membership_type)
# customers[1].upgrade_membership("Gold")
# print(customers[1].membership_type)

# Customer.read_customer() # we've to call from the class because we did not pass "self" in read_customer function!

# print(customers[0])
# print(customers[1])

# Customer.print_all_customer(customers)
# print(customers[0] == customers[1])
# print(customers[0] == customers[2])
# print(id(customers[0]), id(customers[2]))

print(customers)