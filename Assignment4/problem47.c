/*
JTSK-320111
a4 p7.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	double sum(double a, double b){
		double sum_0 = a + b;
		return sum_0;
	}

	void sumbyref(double a, double b, double *s){
		*s = sum(a, b);
	}

	void swapbyref(double *a, double *b){
		double temp = *a;
		*a = *b;
		*b = temp;
	}

	int main() {

		double a, b; /*numbers entered by user*/
		double s; /*sum of a and b*/
		printf("Enter first double:\n");
		scanf ("%lf", &a);
		printf("Enter second double:\n");
		scanf ("%lf", &b);

		printf("The sum of the two doubles is: %lf\n", sum(a, b));
		sumbyref(a, b, &s);
		printf("The sum of the doubles by address is: %lf\n", s);
		printf("The value of the first integer is: %lf. The value of the second double is: %lf.\n", a, b);
		swapbyref(&a, &b);
		printf("The doubles swapped. So, the first double's value is: %lf and the second double's value is %lf.\n", a, b);

		printf("The calls for the two first functions have the same effect:\n");
		if (s == sum(a,b)) printf("True.\n"); 
		else  printf("False.\n");
		
		return 0;
	}