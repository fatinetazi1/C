/*
JTSK-320111
a3 p8.c
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

	if ((ch <= 64) || (ch >= 91)) {
		printf("The input is not an uppercase alphatic character\n");
		return 1;
	}

	int n; /*input entered*/
	printf ("Enter value: ");
	fgets (input, sizeof(input), stdin);
	sscanf (input, "%i", &n);

	if ((n>32) || (n<0)) {
		printf("The value can not be greater than 32 or less or equal to 0.\n");
		return 1;
	} else {
		for ( int i = 0; i<=n ; i++) {
			char next = ch + i; /*ch,ch+1,...,ch+n*/
			printf("%c \n", next);
		}
	}
	printf("\n");
	return 0;
}