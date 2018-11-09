/*
JTSK-320111
a2 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	float a;
	float b;
	float *ptr1 = &a;
	float *ptr2 = &a;
	float *ptr3 = &b;
	printf("The address of ptr1 is: %p.\n", ptr1);
	printf("The address of ptr2 is: %p.\n", ptr2);
	printf("The address of ptr3 is: %p.\n", ptr3);
	return 0;
}