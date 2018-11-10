/*
JTSK-320111
a1 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	int a = 37, b = 14;
	int sum = a+b;
 	printf("The sum of a and b is %d.\n", sum);
 	int product = a*b;
 	printf("The product of a and b is %d.\n", product);
 	int difference = a-b;
 	printf("The difference of a and b is %d.\n", difference);
 	double division = a/b;
 	printf("The division of a and b is %lf.\n", division);
 	int remainder = a%b;
 	printf("The remainder of a and b is %d.\n", remainder);
 	printf("a=%d and b=%d.\n", a, b);
	return 0;
}