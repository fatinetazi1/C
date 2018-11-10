/*
JTSK-320111
a6 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void print_table (char ch, int row, int col) {

	for (int i = 0; i < row; ++i)
	{
		for (int i = 0; i < col; ++i)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
	return;
}


int main() {
	char value[100];
	char character;
	int r; /*number of rows*/
	int c; /*number of columns*/

	printf("Enter character:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%c", &character);

	printf("Enter dimension for row(s):\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &r);

	printf("Enter dimension for column(s):\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &c);

	print_table(character, r, c);

	return 0;
}