/*
JTSK-320111
a4 p5.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	int sum(int input[], int dimension) {
		int sum_1 = 0;
		for (int i = 0; i < dimension; ++i) {
			if (input[i] == -99) {
				return sum_1;		
			} else {
				sum_1 += input[i];
			}
		}
		return sum_1;
	}

	float avg(int input[], int dimension) {
		int sum = 0;
		for (int i = 0; i < dimension; ++i) {
			if (input[i] == -99) {
				break;		
			} else {
				sum += input[i];
			}
		}
		float avg = (float)sum/dimension;
		return avg;
	}

	int main() {
		char value[100];

		int integers[8]; /*integers entered by user*/
		int dim = 0; /*number of integers entered by the user*/
		for (int i = 0; i < 8; i++)
		{
			printf("Enter integer:\n");
			fgets(value, sizeof(value), stdin);
			sscanf (value, "%d", &integers[i]);
			if (integers[i] == -99)
			{
				printf("The average of the integers is: %f\n", avg(integers, dim));
				printf("The sum of the integers is: %d\n", sum(integers, dim));
				return 0;
			} else {
				dim++;
			}
		}
		printf("The average of the integers is: %f\n", avg(integers, dim));
		printf("The sum of the integers is: %d\n", sum(integers, dim));
		return 0;
}

