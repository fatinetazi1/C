/*
JTSK-320111
a4 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	void print_frame(int n, int m, char c) {
		for (int i = 0; i < m; ++i)
		{
			printf("%c", c);
		}
		printf("\n");
		for (int i = 0; i < n-2; ++i)
		{
			printf("%c", c);

			for (int i = 0; i < m-2; ++i)
			{
				printf(" ");
			}
			printf("%c\n", c);
		}
		for (int i = 0; i < m; ++i)
		{
			printf("%c", c);
		}
		printf("\n");
	return;	
	}

	int main() {
		char value[100];

		int n; /*height*/
		printf("Enter height:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &n);

		int m; /*width*/
		printf("Enter width:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%d", &m);

		char c; /*character*/
		printf("Enter character:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &c);

		print_frame(n, m, c);
		return 0;
}