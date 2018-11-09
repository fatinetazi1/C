/*
JTSK-320111
a3 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char input [100];
	int value; /*input entered*/
	printf ("Enter value: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%i", &value);

	 if ( (value%7 == 0) && (value%7 == 0) ) {
	 	printf("The number is divisible by 4 and 7.\n");
	 }
	 else {
	 	printf("The number is not divisible by 4 and 7.\n");
	 }
 	return 0;
}