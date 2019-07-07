# /usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: Matthew Thornton

This program takes an input and lists every possible whole number
multiplication that equals the specified number.
"""

class Dividend_Finder(object):
    def __init__(self):
        self.divisor = 1
    def main(self, dividend):
        divisor = self.divisor
        if dividend == 1:
            print ('1 x 1 = 1')
            return
        while divisor <= dividend:
            if dividend % divisor == 0:
                multiplyer = dividend//divisor
                print (divisor,'x', multiplyer ,'=', dividend)
                if divisor == multiplyer:
                    break
            divisor += 1
            if divisor == multiplyer:
                break

if __name__ == '__main__':
    finder = Dividend_Finder()
    while True:
        dividend = input("Please enter a number: ")
        dividend = int(dividend)
        finder.main(dividend)
        if 'y' not in input("Would you like to run again? Y/N: ").lower():
            break