/*
ICSE 2019 Grade 10
Question 8(a)
Name: Velma Dhatri reddy
Roll number: AI21BTECH11030
Problem Statement
The sum of the first three terms of an Arithmetic Progression (A.P.) is 42 and the product of the
first and third term is 52. Find the first term and the common difference.
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    double a1,a2,a3;
    
    // Let the first, second and third term of an arithmetic progression be a1, a2 and a3 repectively
    // We know that a1 + a3 = 2*a3
    // Sum of the first three terms is 3*a2
    // 3*a2 = 42
    
    a2 = 42/3;
    
    double d1,d2;
    
    // If d is the common difference of the expression we can write a1 = a2 - d and a3 = a2 + d
    // Product of the first and last term is (a2*a2 - d*d)
    // a*a - d*d = 52
    // The two possible values of d are d1 and d2
    
    d1 = pow(a2*a2 - 52, 0.5);
    d2 = -pow(a2*a2 - 52, 0.5);
    
    double first_term1 = a2 - d1;
    double first_term2 = a2 - d2;
    
    printf("There are two possible arithmetic progression\n");
    
    printf("Case1:\n");
    printf("The first term of arithmetic progression is %f\n",first_term1);
    printf("The common difference of the arithematic progression is %f\n", d1);
    
    printf("Case2:\n");
    printf("The first term of arithmetic progression is %f\n",first_term2);
    printf("The common difference of the arithematic progression is %f\n", d2);
    
    return 0;
}

