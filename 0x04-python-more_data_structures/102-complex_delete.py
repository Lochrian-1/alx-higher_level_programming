#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    new = dict(a_dictionary)

    for i, j in new.items():
        if j == value:
            a_dictionary.pop(i)
    return a_dictionary
