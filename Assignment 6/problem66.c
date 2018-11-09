/*
JTSK-320111
a6 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum_rec(int a, int b){
	int sum = 0; // sum from a to b including a and b

	if (b==a+1) {
		sum = a + b;
	} else {
		for (int i = a; i <= b; ++i) {
			sum = a + (sum_rec(a+1, b));
		}
	}
	return sum;
}


int main() {

	char value[100];
	int n ; // lower limit
	printf("Enter n:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &n);
	int m ; // upper limit
	printf("Enter m:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &m);

	if (m < 0 || n < 0 || n > m)
	{
		printf("An error has occured.\n");
	} else {
		printf("The sum between n and m (including n and m is): %d.\n", sum_rec(n, m));
	}
	return 0;
}