#!/usr/bin/python3
"""
This module is doing something
"""


def island_perimeter(grid):
    """same"""
    x = len(grid)
    y = len(grid[0])
    result = 0

    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                # check left, right, up and down neighbors
                if grid[i][j - 1] == 0 or j == 0:
                    result += 1
                if grid[i][j + 1] == 0 or j >= y - 1:
                    result += 1
                if grid[i - 1][j] == 0 or i == 0:
                    result += 1
                if grid[i + 1][j] == 0 or i >= x - 1:
                    result += 1
    return result
