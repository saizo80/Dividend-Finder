# /usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: Matthew Thornton
Rewritten April 16 2022

This program takes an input and lists every possible whole number
multiplication that equals the specified number.
"""

def digitChecker(s):
    # return true if s contains only numbers
    return s.isdigit()

def getInput():
    return input("Enter a number: ")

def dividendFinder(dividend):
    # declare variables
    divisor = 1
    multi = 1

    while dividend != divisor:
        # check divisor and multi; if values
        # are the same break to prevent reprinting
        if divisor != 1 and multi != 1 and divisor == multi:
            break
        if dividend%divisor == 0:
            multi = dividend//divisor
            print("{} x {} = {}".format(divisor, multi, dividend))
        divisor += 1

if __name__ == "__main__":
    userInput = getInput()
    if digitChecker(userInput):
        number = int(userInput)
        if number != 0:
            dividendFinder(number)
        else:
            print ('0 x 0 = 0')