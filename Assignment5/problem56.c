/*
JTSK-320111
a5 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double maxdiff(double arr[], int n) {
	double min = arr[0]; //smallest number in the array
	double max = arr[0]; //largest number in the array

	for (int i = 1; i < n; ++i) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	return max - min;
}


int main() {
	char value[100];
	double n; // first value entered and size of array
	printf("Enter number:\n");
	scanf ("%lf", &n);

	double* a = (double*) malloc(sizeof(double)*n);
	if (a == NULL) {
		printf("An error has occured.\n");
		exit(1);
	}

	a[0] = n;
	
	for (int i = 1; i < n; ++i) {
		scanf ("%lf", &a[i]);
	}

	printf("The difference between the largest and smallest number is: %lf.\n", maxdiff(a, (int) n));
	free(a);
	return 0;
}