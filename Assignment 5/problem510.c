/*
JTSK-320111
a5 p10.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sumdiffproddiv(double a, double b, double *sum, double *diff, double *prod, double *div){
	double addition = a + b;
	double subtraction = a - b;
	double product = a*b;
	double division = a/b;
	sum = &addition;
	diff = &subtraction;
	prod = &product;
	div = &division;
	printf("Sum = %lf. Difference = %lf. Product = %lf. Division = %lf.\n", *sum, *diff, *prod, *div);
	return;
} 


int main() {
	double aa, bb; //two numbers
	double *ptrs, *ptrd, *ptrp, *ptrdi; //pointers for the sum, difference, product and division
	aa = 20;
	bb = 10;
	sumdiffproddiv(aa, bb, ptrs, ptrd, ptrp, ptrdi);
	return 0;
}