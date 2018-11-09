/*
JTSK-320111
a3 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char input [100];
	int n; /*input entered*/
	printf ("Enter value: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%i", &n);
	int sec; /*input converted to seconds*/
	int i = n-(n-1); /*Starts the computation from 1 to n*/

	while ( n <= 0 ) {
		printf ("Enter value: ");
		fgets (input, sizeof(input), stdin);
		sscanf (input, "%i", &n);
	}

	while ( n >= 1 ) {
		sec = i*60;
		if ( i==1 ) {
	 	printf("%i minute is %i seconds.\n", i, sec );
		}
		else {
		printf("%i minutes is %i seconds.\n", i, sec );
		}
		n--;
		i++;
	}
	return 0;
}