/*
JTSK-320111
a2 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	int value;
	printf ("Enter value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%i", &value);
	printf("The value in decimal is: %d.\nThe value in octal is: %o.\nThe value in hexadecimal is: %x.\n", value, value, value);
	return 0;
}