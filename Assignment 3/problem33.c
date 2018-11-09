/*
JTSK-320111
a3 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char input [100];
	char value; /*input entered*/
	printf ("Enter value: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%c", &value);

	 if ( (value >= 'a') && (value <= 'z') ) {
	 	printf("The character is a lowercase alphabetic character.\n");
	 }
	 else {
	 	printf("The character is not a lowercase alphabetic character.\n");
	 }
	return 0;
}