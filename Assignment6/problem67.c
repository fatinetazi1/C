/*
JTSK-320111
a6 p7.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd(int a, int b){
	int gcd; // greatest common divisor
	if (a%b == 0 || b%a == 0) {
		if (a>b) {
			gcd = b;
		} else {
			gcd = a;
		}
	} else {
		for (int i = 1; i < a && i < b; ++i) {
			if (a%i == 0 && b%i == 0) {
				gcd = i;
			}
		}
	}
	return gcd;
}


int main() {

	char value[100];
	int a; // first number
	printf("Enter a:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &a);
	int b; // second number
	printf("Enter b:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &b);

	printf("The GCD of a and b is: %d.\n", gcd(a, b));
	return 0;
}