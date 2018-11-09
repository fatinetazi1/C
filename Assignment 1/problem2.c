/*
JTSK-320111
a1 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	int answer; /* The result of our calculation */
	answer = 3 + 12;
	printf("The answer is %d\n", answer);
	return 0;
}

/*
Explanation
The output was wrong simply because the program 
did not define what the decimal integer, "%d", was.
*/