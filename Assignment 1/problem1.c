/*
JTSK-320111
a1 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	float answer; /* The result of our calculation */
	answer = 1.0/8.0;
	printf("The value of 1/8 is %f\n", answer);
	return 0;
}

/*
Explanation
The values inserted in float are integers, not float values.
Therefore float values were inserted in "answer" in order to 
output the correct value.
*/