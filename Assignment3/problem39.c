/*
JTSK-320111
a3 p9.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char input [100];

	char c; /*character entered*/
	printf ("Enter a character: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%c", &c);

	float grades[50];

	int n; /*input entered*/
	printf ("Enter number of grades: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%d", &n);

	for(int i=0; i<n; ++i) {
		fgets(input, sizeof(input), stdin);
		sscanf(input, "%f", &grades[i]);
	}

	int sum;
	int product = 1;
	int avg = 1;

	
 	switch (c) {
 		case 's':
 			for (int i = 0; i < n; ++i)
 			{
 				sum += grades[i];
 			}
 			printf (" The sum of the grades is: %d\n", sum);
 			sum = 0;
 			break ;
 		case 'p':
 			for (int i = 0; i < n; ++i)
 			{
 				product *= grades[i];
 			}
 			printf (" The product of the grades is: %d\n", product);
			 break ;
 		default :
 			for (int i = 0; i < n; ++i)
 			{
 				sum += grades[i];
 			}
 			avg = sum/n;
 			printf (" The average of the grades is: %d\n", avg);
	 	}
 	
	return 0;
}