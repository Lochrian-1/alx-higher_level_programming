#!/usr/bin/python3
"""Creates a class named Square"""


class Square:
    """Square class"""

    def __init__(self, size=0):
        """Initializes a __init__ method that sets the size of a square"""

        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size

    def area(self):
        """gets the area of the square"""

        return (self.__size * self.__size)
