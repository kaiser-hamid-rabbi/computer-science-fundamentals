# python3
def sum_of_two_digits(first_digit, second_digit):
    return first_digit + second_digit

if __name__ == '__main__':
    # a, b = map(int, input().split())
    a = int(input("Enter a integer number: "))
    b = int(input("Enter another integer number: "))
    c = sum_of_two_digits(a, b)
    print(f"Sum: {c}")
