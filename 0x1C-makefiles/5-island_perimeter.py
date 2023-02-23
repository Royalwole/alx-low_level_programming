#!/usr/bin/python3
"""
This module contains a function island_perimeter
"""

def island_perimeter(grid):
"""
Returns the perimeter of the island described in grid
Args:
    grid (list[list[int]]): a rectangular grid of 0s and 1s

Returns:
    int: the perimeter of the island in the grid

"""
rows = len(grid)
cols = len(grid[0])

perimeter = 0

for i in range(rows):
    for j in range(cols):
        if grid[i][j] == 1:
            # Check left side
            if j == 0 or grid[i][j-1] == 0:
                perimeter += 1
            # Check right side
            if j == cols-1 or grid[i][j+1] == 0:
                perimeter += 1
            # Check top side
            if i == 0 or grid[i-1][j] == 0:
                perimeter += 1
            # Check bottom side
            if i == rows-1 or grid[i+1][j] == 0:
                perimeter += 1

return perimeter
