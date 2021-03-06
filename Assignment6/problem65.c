/*
JTSK-320111
a6 p5.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double vector_norm (double nn, double* vv){
	double sum = 0; // sum of all v^2
	for (int i = 0; i < nn; ++i) {
		sum += vv[i]*vv[i];
	}
	double norm = sqrt(sum);
	return norm;
}


int main() {

	char value[100];
	double n; // number of v's
	printf("Enter n:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%lf", &n);

	double* v = (double*) malloc(sizeof(double)*n); // array of v's
	if(v == NULL) exit(1);

	printf("Enter v:\n");
	for (int i = 0; i < (int) n; ++i) {
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%lf", &v[i]);
	}

	double smallest = v[0]; // smallest number in the array
	int sindex;
	double largest = v[0]; // largest number in the array
	int lindex;

	for (int i = 0; i < n; ++i) {
		if (v[i]>largest) {largest = v[i]; lindex = i;}
		if (v[i]<smallest) {smallest = v[i]; sindex = i;}
	}
	
	printf("The value of the norm is: %lf.\n", vector_norm(n, v));
	printf("The smallest component of the vector is %lf at index %d and the largest is %lf at index %d.\n", smallest, sindex, largest, lindex);
	free(v);
	return 0;
}