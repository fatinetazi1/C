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
	printf ("Enter character: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%c", &ch);

	int n; /*input entered*/
	printf ("Enter value: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%i", &n);

	while ( n <= 0 ) {
		printf ("Enter character: ");
		fgets (input, sizeof(input), stdin);
		sscanf (input, "%c", &ch);

		printf ("Enter value: ");
		fgets (input, sizeof(input), stdin);
		sscanf (input, "%i", &n);
	}

	for ( int i = 1; i<=n ; i++) {
		printf("%c ", ch);
	}

	printf("\n");
	return 0;
}