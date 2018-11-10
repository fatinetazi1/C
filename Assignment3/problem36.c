/*
JTSK-320111
a3 p6.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char input [100];

	char ch; /*character entered*/
	int n = 0; /*input entered*/
	printf ("Enter character: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%c", &ch);

	while ( n <= 0 ) {
		printf ("Enter value greater than 0: ");
		fgets (input, sizeof(input), stdin);
		sscanf (input, "%i", &n);
	}

	for ( int i = 1; i<=n ; i++) {
		printf("%c ", ch);
	}

	printf("\n");
	return 0;
}