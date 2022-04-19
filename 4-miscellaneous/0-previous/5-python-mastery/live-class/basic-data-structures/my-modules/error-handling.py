try:
    num = 1 / 0 # Zero Division error
    # 4 + spam * 3 # Name error
    # '2' + 2 # Type error

except ZeroDivisionError:
    print("Zero Division Error!")
except NameError:
    print("Name Error!")
except TypeError:
    print("Type Error!")