#!/usr/bin/python3

x = 122
for i in range(122, 110, -1):
    print("{}".format(chr(x)), end='')
    x = x - 33
    print("{}".format(chr(x)), end='')
    x = x + 31
print("{}".format(chr(98)), end='')
print("{}".format(chr(65)), end='')
