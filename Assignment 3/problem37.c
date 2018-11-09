/*
JTSK-320111
a3 p7.c
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


	for ( int i = 0; i<=n ; i++) {
		char next = ch + i; /*ch,ch+1,...,ch+n*/
		printf("%c \n", next);
	}

	printf("\n");
	return 0;
}