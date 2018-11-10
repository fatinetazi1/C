/*
JTSK-320111
a6 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

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
	return;
}


int main() {

	int array[6]={3,2,9,3,7,17};
	triple(array, 6);

	return 0;
}