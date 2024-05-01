#!/usr/bin/python3
"""
    Computes the square value of all integers of a matrix using map.

    Parameters:
        matrix (list of lists): The input matrix.

    Returns:
        list of lists: A new matrix where each value is
        the square of the corresponding value in the input matrix.
    """


def square_matrix_map(matrix=[]):
    return list(map(lambda row: list(map(lambda x: x ** 2, row)),
                    matrix))
