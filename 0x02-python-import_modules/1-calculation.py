#!/usr/bin/python3
from calculator_1 import add, sub, mul, div

if __name__ == '__main__':
    """

    The result of the addition, substract,division
    and  multiplication between two numbers a and b

    """
    a = 10
    b = 5
    print('{:d} + {:d} = {:d}'.format(a, b, add(a, b)))
    print('{:d} - {:d} = {:d}'.format(a, b, sub(a, b)))
    print('{:d} / {:d} = {:d}'.format(a, b, div(a, b)))
    print('{:d} * {:d} = {:d}'.format(a, b, mul(a, b)))
