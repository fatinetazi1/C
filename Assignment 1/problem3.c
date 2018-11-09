/*
JTSK-320111
a1 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	double result; /* The result of the division */
	int divisor = 22.0;
	result = (double) 7 / divisor;
 	printf("The result is %lf\n", result);
	return 0;
}

/*
Explanation
There was a missing "#" infront of the function that 
includes the library that should be referred to.
Also, the wrong formating was used for the the double result, 
%d was used instead of %lf. %lf is for doubles and %d is for integers.
*/