/*
JTSK-320111
a5 p7.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void two_smallest(float arr[], int n) {
	float s1 = n; //smallest number in the array
	float s2 = n; //second smallest number in the array
	for (int i = 1; i < n; ++i) {
		if ((s1 == arr[1]) || (s2 == arr[2])) i++;
		if (s1 > arr[i]) {
			s2 = s1;
			s1 = arr[i];
		} 
	}

	printf("The smallest numbers are: %f, %f\n", s1, s2);
	return;
}


int main() {
	char value[100];
	float n; // first value entered and size of array
	printf("Enter number:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%f", &n);

	float* a = (float*) malloc(sizeof(float)*n);
	if (a == NULL) {
		printf("An error has occured.\n");
		exit(1);
	}

	a[0] = n;
	for (int i = 1; i < n; ++i) {
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%f", &a[i]);
	}

	two_smallest(a, (int) n);
	free(a);
	return 0;
}