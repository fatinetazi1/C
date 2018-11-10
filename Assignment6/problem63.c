/*
JTSK-320111
a6 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int count_upper(char* str) {
	int dim = strlen(str); //length of string
	int count = 0; // number of uppercase
	for (int i = 0; i < dim; ++i)
	{
		if (isupper(str[i]))
		{
			count++;
		}
	}
	return count;
}

int main() {
	char value[100];
	char string[100]; //string entered
	printf("Enter string:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%s", string);
	if (string[0]=='\0') {
		printf("The program terminated.\n");
		exit(1);
	} else {
		printf("There are %d uppercase letters in the string.\n", count_upper(string));
	}
	while(string[0] != '\n') {
		printf("Enter string:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%s", string);
		printf("There are %d uppercase letters in the string.\n", count_upper(string));
	}
	return 0;
}