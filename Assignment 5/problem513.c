/*
JTSK-320111
a5 p13.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void mixcase(char *str) {
	int n = strlen(str);
	//char* new_string = (char*) malloc(sizeof(char)*n);
	//new_string = str;
	printf("The old string is: %s\n", str);
	for (int i = 0; i < n; ++i) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		} else {
			str[i] = tolower(str[i]);
		}
	}
	printf("The new string is: %s\n", str);
	//free(new_string);
	return;
}

int main() {
	char value[100];
	char string[100];
	printf("Enter string:\n");
	fgets(value, sizeof(value), stdin);
	sscanf (value, "%s", string);
	if ((strcmp(string, "exit")) == 0) {
		printf("The program terminated.\n");
		exit(1);
	} else {
		mixcase(string);
	}
	while ((strcmp(string, "exit")) != 0) {
		printf("Enter string:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%s", string);
		if ((strcmp(string, "exit")) == 0) {
			printf("The program terminated.\n");
			exit(1);
		} else {
			mixcase(string);
		}
	}
	return 0;
}