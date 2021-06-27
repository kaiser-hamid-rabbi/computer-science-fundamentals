def leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                print(f"{year} is a leap_year!")
            else:
                print(f"{year} is NOT leap_year!")
        else:
            print(f"{year} is a leap_year!")
    else:
        print(f"{year} is NOT leap_year!")

if __name__ == "__main__":
    y = int(input("Please enter a year: "))
    leap_year(y)