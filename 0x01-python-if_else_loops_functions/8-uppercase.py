#!/usr/bin/python3

def uppercase(str):

    count = 0
    length = len(str)

    if length == 0:
        return 1

    for i in str:
        ascii_val = ord(i)

        if ascii_val >= 97 and ascii_val <= 122:
            i = chr(ascii_val - 32)

        if count < (length - 1):
            print("{}".format(i), end="")
        else:
            print("{}".format(i))

        count += 1
