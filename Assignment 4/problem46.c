/*
JTSK-320111
a4 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	int posmin(int v[], int n) {
		int pos_min = 0; 
		for (int i = 1; i < n; ++i) {
			if (v[i] > v[pos_min]) {
			} else {
				pos_min = v[i];
			}
		}
		return pos_min;
	}

	int main() {
		char value[100];

		int integers[50];
		int n; /*how many integers will be entered by the user*/
		printf("Enter integer:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &integers[0]);
		n = integers[0] + 1;

		for (int i = 1; i < n; ++i) {
			printf("Enter integer:\n");
			fgets(value, sizeof(value), stdin);
			sscanf (value, "%d", &integers[i]);
		}

		printf("The elements of the array are:\n");
		for (int i = 0; i < n; ++i) {
			printf("%d ", integers[i]);
		}
		printf("\n");
		printf("The minimum value in the array is: %d\n", posmin(integers, n));


		return 0;
	}