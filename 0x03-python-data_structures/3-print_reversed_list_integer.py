#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):

    if len(my_list) == 0:
        return

    list_len = (len(my_list) + 1) * -1

    for i in range(-1, list_len, -1):
        print("{:d}".format(my_list[i]))
