/*
JTSK-320111
a2 p5.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	int val;
	printf ("Enter an integer: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%d", &val);
	printf("The value of the integer(val) is: %d.\n", val);
	int *ptr_val = &val;
	printf("The address of val is: %p.\n", ptr_val);
	*ptr_val = *ptr_val +1;
	printf("The new value of val is: %d.\n", *ptr_val);
	printf("The new address of val is: %p.\n", ptr_val);
	return 0;
}