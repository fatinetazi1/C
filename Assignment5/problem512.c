/*
JTSK-320111
a5 p12.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myreplace (char *str, char c, char e) {
	int n = strlen(str);
	printf("The old string is: %s\n", str);
	for (int i = 0; i < n; ++i) {
		if (str[i] == c) {
			str[i] = e;
		}
	}
	printf("The new string is: %s\n", str);
	return;
}

int main() {
	char value[100];
	char string[70];
	char replaced; // c
	char placed; // e
	printf("Enter string:\n");
	fgets(string, sizeof(string), stdin);
	if ((strcmp(string, "quit")) == 0) {
		printf("The program terminated.\n");
		exit(1);
	} else {
		printf("Enter old character:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &replaced);
		printf("Enter new character:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &placed);
		myreplace(string, replaced, placed);
	}
	while ((strcmp(string, "quit")) == 0) {
		printf("Enter string:\n");
		fgets(string, sizeof(string), stdin);
		printf("Enter old character:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &replaced);
		printf("Enter new character:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &placed);
		myreplace(string, replaced, placed);
	}
	return 0;
}