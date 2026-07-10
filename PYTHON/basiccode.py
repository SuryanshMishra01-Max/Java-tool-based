a = int(input("Enter 1st no.: "))
b = int(input("Enter 2nd no.: "))
c = int(input("Enter 3rd no.: "))

if a > b:
    if a > c:
        print("Largest:", a)
    else:
        print("Largest:", c)
else:
    if b > c:
        print("Largest:", b)
    else:
        print("Largest:", c)