/*
JTSK-320111
a5 p8.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void matrix(int arr[][50], int n) {
	printf("The entered matrix is: \n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return;
}

void diagonal_matrix(int arr[][50], int n) {
	printf("The main diagonal is: \n");
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i][i]);
	}
	printf("\n");
	return;
}


int main() {
	char value[100];
	int b; // number of rows and columns
	printf("Enter number of rows and columns (square matix (n x n)):\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &b);
	int a [50][50];
	printf("Enter values of matrix:\n");
	for (int i = 0; i < b; ++i) {
		for (int j = 0; j < b; ++j) {
			fgets(value, sizeof(value), stdin);
			sscanf (value, "%d", &a[i][j]);
		}
	}
	matrix(a, b);
	diagonal_matrix(a, b);
	return 0;
}