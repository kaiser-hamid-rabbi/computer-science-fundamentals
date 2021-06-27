def leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                print(f"{year} is a Leap Year!")
            else:
                print(f"{year} is NOT a Leap Year!")
        else:
            print(f"{year} is a Leap Year!")
    else:
        print(f"{year} is NOT a Leap Year!")

if __name__ == "__main__":
    yr = int(input("Please enter a year: "))
    leap_year(yr)