/*
JTSK-320111
a5 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double harmonic_mean(int arr[], int num) {
	double m = (1.0)/arr[0];;
	for (int i = 1; i < num; ++i) {
		m += (1.0)/arr[i];
	}
	m = (double)(num)/m;
	return m;
}

int high (int arr[], int num) {
	int h = arr[0];
	for (int i = 1; i < num; ++i) {
		if (arr[i] > h) {
			h = arr[i];
		} 
	}
	return h;
} 

int low (int arr[], int num) {
	int l = arr[0];
	for (int i = 1; i < num; ++i) {
		if (arr[i] < l) {
			l = arr[i];
		} 
	}
	return l;
} 

int sum (int arr[], int num) {
	int s = arr[0];
	for (int i = 1; i < num; ++i) {
		s += arr[i];
	}
	return s;
}

int elements (int num) {
	return num;
}



int main() {

	int integers[10]; /*integers entered by user*/
	int dim = 0; /*number of integers entered by the user*/
	char function; /*computation wanted by the user*/

	printf("Enter integer:\n");
	for (int i = 0; i < 10; i++) {
		dim = i;
		scanf ("%d", &integers[i]);
		if (integers[i] < 0) {
			break;
		} 
	}

	int catch;
	while ((catch = getchar()) != '\n' && catch != EOF); 

	printf("Enter function(m, h, l, s, n):\n");
	scanf ("%c", &function);

	switch (function) {
		case 'm':
			printf("The harmonic mean of the array is: %lf\n", harmonic_mean(integers, dim));
			break;
		case 'h':
			printf("The highest number in the array is: %d\n", high(integers, dim));
			break;
		case 'l':
			printf("The lowest number in the array is: %d\n", low(integers, dim));
			break;
		case 's':
			printf("The sum of the numbers in the array is: %d\n", sum(integers, dim));
			break;
		case 'n':
			printf("The number of elements in the array is: %d\n", elements(dim));
			break;
		default:
			printf("This is not one of the options in the program.\n");
			break;
	}

	return 0;
}