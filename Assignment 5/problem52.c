/*
JTSK-320111
a5 p2.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void print_diagonal(char str[], int dimension) {

	for (int i = 0; i < dimension; ++i) {
		for (int s = 0; s <= i; ++s) {
			printf(" ");
		}
		printf("%c\n", str[i]);
	}
	return;	
} 

int main() {

	char value[100]; /*string entered*/
	printf("Enter string:\n");
	fgets(value, sizeof(value), stdin);
	value[strlen(value)-1]='\0';
	int dim = strlen(value); /*dimension of the string*/
	print_diagonal(value, dim);
	
	return 0;
}