/*
JTSK-320111
a2 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	float value1;
	printf ("Enter first value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%f", &value1);
	float value2;
	printf ("Enter second value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%f", &value2);
	float sum1 = value2 + value1;
	printf ("The sum of the values is : %f\n", sum1);
	float difference1 = value2 - value1;
	printf ("The difference of the values is : %f\n", difference1);
	float square1 = value1*value1;
	printf ("The square of the first value is : %f\n", square1);

	int value3;
	printf ("Enter third value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%i", &value3);
	int value4;
	printf ("Enter forth value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%i", &value4);
	int sum2 = value4 + value3;
	int product2 = value4 * value3;
	printf ("The sum of the third and forth value is : %i.\nThe product of the third and forth value is : %i.\n", sum2, product2);

	char value5;
	printf ("Enter fifth value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%c", &value5);
	char value6;
	printf ("Enter sixth value: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%c", &value6);
	char sum3 = value6 + value5;
	char product3 = value6*value5;
	printf("The sum of the fifth and sixth value is : %c.\nThe product of the fifth and sixth value is: %c.\n", sum3, product3);
	printf("The sum of the fifth and sixth value is : %d.\nThe product of the fifth and sixth value is: %d.\n", sum3, product3);
	return 0;

}