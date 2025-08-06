# Pyramid Pattern Printer

This C program prints a right-aligned half-pyramid of hashes (`#`) based on the height input provided by the user.

## Overview

The user is prompted to enter a positive integer (height), and the program prints a pyramid of that height using spaces and hash symbols. This exercise is commonly seen in CS50 and similar introductory programming courses.

## Example Output

If the user inputs `4`, the output will be:


## Features

- Uses `cs50.h` to safely get integer input.
- Ensures height is a positive number using a `do-while` loop.
- Constructs the pyramid using nested `for` loops.

## Usage

### Input

### Output

## Compilation

In the CS50 IDE, use:

```bash
make pyramid
clang -o pyramid pyramid.c -lcs50

---

Let me know if you also want the program to print a *double-sided pyramid* (like in Mario problem) or want a version without `cs50.h`.



### Output

