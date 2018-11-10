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
	char string[70];
	char replaced; // c
	char placed; // e
	
	while (1) {
		printf("Enter string:\n");
		scanf("%s", string);
		getchar();
		if (strcmp(string, "quit") == 0) break;

		printf("Enter old character:\n");
		scanf ("%c", &replaced);
		getchar();

		printf("Enter new character:\n");
		scanf ("%c", &placed);
		getchar();

		myreplace(string, replaced, placed);
	}
	return 0;
}