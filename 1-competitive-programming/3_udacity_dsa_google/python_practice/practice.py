"""You can use this class to represent how classy someone
or something is.
"Classy" is interchangable with "fancy".
If you add fancy-looking items, you will increase
your "classiness".
Create a function in "Classy" that takes a string as
input and adds it to the "items" list.
Another method should calculate the "classiness"
value based on the items.
The following items have classiness points associated
with them:
"tophat" = 2
"bowtie" = 4
"monocle" = 5
Everything else has 0 points.
Use the test cases below to guide you!"""


class Classy:
    def __init__(self, items=[], res=0):
        self.items = items
        self.res = res

    def getClassiness(self):
        print(f'{self.res}')
        return

    def addItem(self, name):
        if name == 'tophat':
            self.res = self.res + 2
            self.items.append(name)
        elif name == 'bowtie':
            self.res = self.res + 4
            self.items.append(name)
        elif name == 'monocle':
            self.res = self.res + 5
            self.items.append(name)
        else:
            self.res = self.res + 0
            self.items.append(name)

        # print(f'items: {self.items}')

        return



# Test cases
me = Classy()

# Should be 0
me.getClassiness()


me.addItem("tophat")
# Should be 2
me.getClassiness()
#
#
me.addItem("bowtie")
me.addItem("jacket")
me.addItem("monocle")
# # Should be 11
me.getClassiness()
#
#
me.addItem("bowtie")
# # Should be 15
me.getClassiness()