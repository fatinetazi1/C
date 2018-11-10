/*
JTSK-320111
a6 p7.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd_func(int a, int b){
	int gcd; // greatest common divisor
	if (a%b == 0 || b%a == 0) {
		if (a>b) { gcd = b;
		} else {gcd = a;}
	} else {
		gcd = gcd_func(a/b, b);
	}
	return gcd;
}


int main() {

	int a; // first number
	int b; // second number
	printf("Enter a:\n");
	scanf ("%d", &a);
	if(a == 0) {exit(1);}
	printf("Enter b:\n");
	scanf ("%d", &b);
	if(b == 0) {exit(1);}
	
	printf("The GCD of a and b is: %d.\n", gcd_func(a, b));
	return 0;
}