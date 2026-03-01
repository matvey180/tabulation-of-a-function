# Function Value Calculator

A C++ program that calculates and displays values of two mathematical functions F(x) and G(x) over a specified interval [A, B] with a given number of steps.

## Description

This program computes two functions:
- **F(x) = sin(x) + cos(x) - 1**
- **G(x) = (x+5)³ / (1 + sin²(x))**

The user inputs:
1. The beginning (A) and end (B) of the segment
2. The number of steps (N) - must be a positive integer

The program then calculates and displays the function values at each point: x_i = A + i*h, where h = (B-A)/N.

## Features

- Input validation for segment correctness
- Input validation for integer and positive step count
- Handles special case when A = B (single point)
- Formatted table output with 6 decimal places precision
- Clear error messages for invalid inputs

## Functions

### F(x)
