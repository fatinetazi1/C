/*
JTSK-320111
a6 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void triple(int arr[], int size) {
	printf("The initial array is the following: \n");
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("The array multiplied by three is the foloowing:\n");
	for (int i = 0; i < size; ++i) {
		int new[size];
		new[i] = arr[i]*3;
		printf("%d ", new[i]);
	}
	printf("\n");
	return;
}


int main() {

	char value[100];
	int n = 0; //number of elements
	printf("Enter number of integers:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &n);
	int* arr = (int*) malloc(sizeof(int)*n); // integers entered
	printf("Enter integers: \n");
	for (int i = 0; i < n; ++i)
	{
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &arr[i]);
	}
	triple(arr, n);
	free(arr);
	return 0;
}