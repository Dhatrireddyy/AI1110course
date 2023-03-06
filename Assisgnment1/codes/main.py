# ICSE 2019 Grade 10
# Question 8(a)

# Name: Velma Dhatri Reddy
# Roll number: AI21BTECH11030

""" Problem Statement
The sum of the first three terms of an Arithmetic Progression (A.P.) is 42 and the product of the
first and third term is 52. Find the first term and the common difference.
"""

import math

def main():
    S = 42   # Sum of the first three terms
    P = 52   # Product of the first and third term

    #Output
    print("Case 1:")
    print(f"The common difference is {CommonDifference1(S,P)} ")
    print(f"The first term of the arithmetic progression is {FirstTerm1(S,P)}")

    print("Case 2:")
    print(f"The common difference is {CommonDifference2(S,P)} ")
    print(f"The first term of the arithmetic progression is {FirstTerm2(S,P)}")

    
def CommonDifference1(Sum,Product) -> int:
        """ Returns the common difference """
        return math.sqrt((Sum/3)**2 - Product)


def FirstTerm1(Sum,Product) -> int:
        """ Returns the first term """
        return Sum/3 - CommonDifference1(Sum,Product)

def CommonDifference2(Sum,Product) -> int:
        """ Returns the common difference """
        return -1 * math.sqrt((Sum/3)**2 - Product)


def FirstTerm2(Sum,Product) -> int:
        """ Returns the first term """
        return Sum/3 - CommonDifference2(Sum,Product)        

if __name__ == '__main__':
       main()
