/*
JTSK-320111
a4 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	double result; /*conversion from mm to m*/

	double convert(int mm) {
		double m = mm*0.001;
		result = m;
		return result;
	}

	int main() {
		char value[100];
		int input;
		printf("Enter value in millimeters:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &input);
		printf("Value in meters: %lf\n", convert(input));
		return 0;
}

