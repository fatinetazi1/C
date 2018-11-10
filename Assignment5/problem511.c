/*
JTSK-320111
a5 p11.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_char (char *str, char c) {
	int n = strlen(str);
	int occ = 0; //occurrence of char c
	for (int i = 0; i < n; ++i) {
		if (str[i] == c) {
			occ++;
		}
	}
	return occ;
}

int main() {
	char value[100];
	int n; // size of array
	printf("Enter length of string:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%d", &n);
	char* string = (char*) malloc(sizeof(char)*n); // string entered
	printf("Enter string:\n");
	fgets(string, n+2, stdin);
	printf("The character ’B’ occurs %d times.\n", count_char(string, 'B'));
	printf("The character ’p’ occurs %d times.\n", count_char(string, 'p'));
	printf("The character ’i’ occurs %d times.\n", count_char(string, 'i'));
	printf("The character ’D’ occurs %d times.\n", count_char(string, 'D'));
	printf("The character ’z’ occurs %d times.\n", count_char(string, 'z'));
	free(string);
	return 0;
}