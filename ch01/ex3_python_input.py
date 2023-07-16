#!/usr/bin/python3

# Python input example

def main():
    num1 = input("Enter a number: ");
    num1 = int(num1)
    num2 = input("Enter another: ")
    num2 = int(num2)

    print("%d + %d = %d" % (num1, num2, (num1+num2)))

# call the main function:
main()

