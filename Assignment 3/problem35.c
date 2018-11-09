/*
JTSK-320111
a3 p5.c
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

	for ( int i = 1; i<=n ; i++) {
		sec = i*60;
		if ( i==1 ) {
	 	printf("%i minute is %i seconds.\n", i, sec );
		}
		else {
		printf("%i minutes is %i seconds.\n", i, sec );
		}
	}
	return 0;
}