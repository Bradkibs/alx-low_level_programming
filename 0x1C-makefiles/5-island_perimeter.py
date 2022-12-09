#!/usr/bin/python3
"""
A function that returns the perimeter of the island described in grid:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
"""


def island_perimeter(grid):
    """
    A technical interview question
    """
    width = 0
    length = 0
    lst = []
    for i in range(len(grid)):
        lst.append(grid[i].count(1))
        if lst[i] > 0:
            length += 1
    width = max(lst)
    for i in lst:
        if i != width and i > 1:
            return (length + width) * 2 + 4
    return (length + width) * 2
