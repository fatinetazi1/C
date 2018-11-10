/*
JTSK-320111
a6 p10.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	char line[100]; 

	FILE *fptr = fopen("text.txt", "r"); // opening text file
	if(fptr == NULL) {
		exit(1);
	}

	FILE *fptr2 = fopen("text_copy.txt", "w"); // opening a file to copy in
	if(fptr2 == NULL) {
		exit(1);
	}

	while(fgets(line, sizeof(line), fptr) != NULL) {
		fprintf(fptr2, "%s", line);
	}

	fclose(fptr);
	fclose(fptr2);
	return 0;
}