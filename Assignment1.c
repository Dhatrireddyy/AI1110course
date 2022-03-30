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
    
    double a;
    double d1;
    double d2;
    
    // Let the first, second and third term of an arithmetic progression be a-d, a and a+d repectively
    
    // Sum of the first three terms is 3*a
    // 3*a = 42
    
    a = 42/3;
    
    // Product of the first and last term is (a*a - d*d)
    // a*a - d*d = 52
    
    d1 = pow(a*a - 52, 0.5);
    d2 = -pow(a*a - 52, 0.5);
    
    double first_term1 = a - d1;
    double first_term2 = a - d2;
    
    printf("There are two possible arithmetic progression\n");
    
    printf("Case1:\n");
    printf("The first term of arithmetic progression is %f\n",first_term1);
    printf("The common difference of the arithematic progression is %f\n", d1);
    
    printf("Case2:\n");
    printf("The first term of arithmetic progression is %f\n",first_term2);
    printf("The common difference of the arithematic progression is %f\n", d2);
    
    return 0;
}
