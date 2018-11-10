/*
JTSK-320111
a4 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	int posmin(int v[], int n) {
		int pos_min = 0; 
		printf("%d ", v[0]);
		for (int i = 1; i < n; ++i) {
			printf("%d ", v[i]);
			if (v[i] < v[pos_min])  pos_min = v[i];
		}
		printf("\n");
		return pos_min;
	}

	int main() {
		int integers[50];
		int n = 51; /*how many integers will be entered by the user*/
		while(n > 50 || n < 1){
			printf("Enter positive integer (up to 50):\n");
			scanf ("%d", &n);
		}
		
		printf("Enter integers:\n");
		for (int i = 0; i < n; ++i) {
			scanf ("%d", &integers[i]);
		}

		printf("\n");
		printf("The first occurence of the minimum value in the array is in position: %d\n", posmin(integers, n));

		return 0;
	}