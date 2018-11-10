/*
JTSK-320111
a4 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	double result; /*conversion from mm to m*/

	double to_kilogram(int pound, int ounce) {
		double k = (pound*453.6) + (ounce*28.350);
		result = k;
		return result;
	}

	int main() {
		char value[100];

		int pounds;
		printf("Enter pounds:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &pounds);

		int ounces;
		printf("Enter ounces:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &ounces);

		printf("Conversion to kilograms: %lf\n", to_kilogram(pounds, ounces));
	return 0;
}