#!/usr/bin/python3

def uniq_add(my_list=[]):

    numbers = list(set(my_list))
    sum1 = 0

    for i in range(len(numbers)):
        sum1 += int(numbers[i])

    return sum1
