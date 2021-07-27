try:
    # num = 1 / 0 # Zero Division error
    # 4 + spam * 3 # Name error
    # '2' + 2 # Type error
    message = 'I don\'t think she is 18'
    print(message)
    # x = int(input("Please enter a number: ")) # Value error for non-numeric number

    # print("Run time error demo")
    # first = 1
    # second = 2
    # third = 3
    # extra = int(input("What is the extra value? "))
    #
    # total = first + second + third + extra
    # print(total)

except ZeroDivisionError:
    print("Zero Division Error!")
except NameError:
    print("Name Error!")
except TypeError:
    print("Type Error!")
except SyntaxError:
    print("Syntax error!")
except ValueError:
    print("Value error!")
except RuntimeError:
    print("Runtime Error!")
except OSError:
    print("OS Error!")
finally:
    print("Error Handled successfully!")


