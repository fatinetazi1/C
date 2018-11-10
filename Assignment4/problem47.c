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
		double sum_0 = a + b;
		*s = sum_0;
		return;
	}

	void swapbyref(double *a, double *b){
		double temp = *a;
		*a = *b;
		*b = temp;
		return;
	}

	int main() {
		char value[100];

		double a, b; /*numbers entered by user*/
		double *ptra = &a; /*pointer for a*/
		double *ptrb = &b; /*pointer for b*/
		double *ptr; /*pointer for the sum of a and b*/
		printf("Enter first integer:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%lf", &a);
		printf("Enter second integer:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%lf", &b);

		printf("The sum of the two integers is: %lf\n", sum(a, b));
		sumbyref(a, b, ptr);
		printf("The address of the sum of the integers is: %p\n", ptr);
		printf("The value of the first integer is: %lf. The value of the second integer is: %lf.\n", a, b);
		swapbyref(ptra, ptrb);
		printf("The integers swapped. So, the first integer's value is: %lf and the second integer's value is %lf.\n", a, b);

		double summ = *ptr;
		printf("The calls for the two first functions have the same effect:\n");
		if (summ == sum(a,b))
		{
			printf("True.\n");
		} else {
			printf("False.\n");
		}
		return 0;
	}