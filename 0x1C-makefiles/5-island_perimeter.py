#!/usr/bin/python3

"""
This module contains a function that returns the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    rows = len(grid)
    cols = len(grid[0])
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Found the first land cell, do a depth-first search
                visited = set()
                perimeter = 0
                dfs(row, col, visited, grid, perimeter)
                return perimeter

def dfs(row, col, visited, grid, perimeter):
    """
    Does a depth-first search from the current cell (row, col) and marks all the
    connected land cells as visited while counting the perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    visited.add((row, col))
    # Check left
    if col == 0 or grid[row][col - 1] == 0:
        perimeter += 1
    elif (row, col - 1) not in visited:
        dfs(row, col - 1, visited, grid, perimeter)
    # Check right
    if col == cols - 1 or grid[row][col + 1] == 0:
        perimeter += 1
    elif (row, col + 1) not in visited:
        dfs(row, col + 1, visited, grid, perimeter)
    # Check up
    if row == 0 or grid[row - 1][col] == 0:
        perimeter += 1
    elif (row - 1, col) not in visited:
        dfs(row - 1, col, visited, grid, perimeter)
    # Check down
    if row == rows - 1 or grid[row + 1][col] == 0:
        perimeter += 1
    elif (row + 1, col) not in visited:
        dfs(row + 1, col, visited, grid, perimeter)

