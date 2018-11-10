/*
JTSK-320111
a5 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>


int main() {

	char value[100];

	int min; /*lower bound*/
	printf("Enter minimum:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &min);

	int max; /*upper bound*/
	printf("Enter maximum:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &max);

	int minimum = min;
	int maximum = max;
	float square=0; /*value squared*/
	float cube=0; /*value cubed*/

	for (float i = minimum; i <= maximum; ++i)
	{
		square = i*i;
		cube = i*i*i;
		printf("| %12.3f | %12.3f | %12.3f |\n", i, square, cube);
	}
	
	return 0;
}

