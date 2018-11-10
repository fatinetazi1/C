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
	int count = 0; // number of uppercase
	for (char *i = str; *i != '\0'; i++) {
		if (isupper(*i)){
			count++;
		}
	}
	return count;
}

int main() {
	char string[100]; //string entered
	while(1) {
		printf("Enter string:\n");
		fgets(string, sizeof(string), stdin);
		sscanf(string, "%s", string);
		if (strcmp(string, "\n") == 0) break;
		printf("There are %d uppercase letters in the string.\n", count_upper(string));
	}
	return 0;
}