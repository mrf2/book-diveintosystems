#!/usr/bin/python3

# An example Python program using a list.

def main():

    # create an empty list
    my_lst = []

    # add 10 integers to the list
    for i in range(10):
        my_lst.append(i)

    # set value at position 3 to 100
    my_lst[3] = 100

    # print the number of list items 
    print("ist %d items: " % len(my_lst))

    # print each element of the list
    for i in range(10):
        print ("%d" % my_lst[i])

# call the main function:
main()

