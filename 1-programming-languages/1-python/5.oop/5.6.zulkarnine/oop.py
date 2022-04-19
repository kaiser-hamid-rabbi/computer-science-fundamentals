class Person:
    def __init__(self, name:str, yob:int, height_inches:int =None):
        self.__name = name # private vairable
        self.__yob = yob
        self.__height = height_inches
        self.abc = None

    def get_yob(self):
        return self.__yob

    def get_name(self):
        return self.__name

    def set_name(self, new_name):
        if (self.__has_any_number(new_name)):
            print("Sorry, person name can't have number")
            return
        self.__name = new_name

    def __has_any_number(self, string): # private function
        return "0" in string

    def get_summary(self):
        # pass
        return f"Name: {self.__name}, YOB: {self.__yob}, Height: {self.__height if self.__height is not None else 'Invalid'}"

# a_person = Person("Rabbi", 1991, 72)
# b_person = Person("Zulkarnine")
# print(a_person.name)
# print(b_person.get_name())

# print(a_person.get_summary())
# print(a_person.get_name())
# a_person.set_name("Kaiser Hamid")
# print(a_person.get_summary())
# print(a_person.__dob)
# print(a_person._Person__dob) # Data Mangling
# a_person.set_name("0Rabbi")
# a_person.name = "0Rabbi"
# print(a_person.name)


# person_list = [Person("Rabbi", 1991, 72),
#                Person("Foo", 1980),
#                Person("Bar", 1993, 65),
#                Person("Baz", 2020, 80),
#                Person("Ban", 1945),
#                Person("Ben", 1900, 72)]

# for person in person_list:
#     if person.get_yob() >= 1930:
#         print(person.get_summary())

class Student(Person):
    def __init__(self, name: str, yob: int, email_id:str, student_id:str):
        super().__init__(name, yob)
        self.email = email_id
        self.sid = student_id

    def get_summary(self):
        return f"Name: {self.get_name()} Email: {self.email} YOB: {self.get_yob()}"

    def __str__(self):
        # return f"Name: {self.get_name()} Email: {self.email} YOB: {self.get_yob()}"
        return self.get_summary()

    def __repr__(self):
        # return f"Name: {self.get_name()} Email: {self.email} YOB: {self.get_yob()}"
        return self.get_summary()

student = Student("A", 2000, "a@google.com", "1212asd")
# print(student.get_summary())
# print(student)
# student.set_name("Rabbi")
# print(student.get_summary())
# print(student)


class Teacher(Person):
    def __init__(self, name: str, yob: int, department:str):
        super().__init__(name, yob)
        self.dept = department

    def get_summary(self):
        return f"{self.get_name()} is a teacher!"

new_person_list = [Person("Rabbi", 1991),
               Student("S", 2000, "a@gmail.com", "stid"),
               Teacher("T", 1980, "tid")]


for p in new_person_list:
    print(p.get_summary())
    # print(p.get_name())


class PlainClass:
    pass

abc = PlainClass()
abc.age = 30
abc.name = "Movie"

print(abc.age)
print(abc.name)
