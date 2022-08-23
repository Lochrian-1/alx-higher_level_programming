#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
final= abs(number) % 10
if number < 0:
    final = final * -1

if final == 0:
    print("Last digit of {:d} is {:d} and is 0".format(number, final))
elif final < 6:
    print("Last digit of {:d} is {:d} and is less than 6 and not \
0".format(number, final))
else:
    print("Last digit of {:d} is {:d} and is greater than \
5".format(number, final))
