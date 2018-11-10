/*
JTSK-320111
a4 p9.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

	int main() {
		char s1[100]; /*String 1*/
		char s2[100]; /*String 2*/
		char s3[100]; /*String 3*/
		int i; // length of string
		char c; /*Character that will be looked for in s1*/

		printf("Enter first string:\n");
		fgets(s1, sizeof(s1), stdin);
		sscanf (s1, "%s", s1);
		for(i = 0; s1[i] != '\0'; ++i);
		printf("Length: %d.\n", i);

		printf("Enter second string:\n");
		fgets(s2, sizeof(s2), stdin);
		sscanf (s2, "%s", s2);
		for(i = 0; s2[i] != '\0'; ++i);
		printf("Length: %d.\n", i);

		char concatenation[200];
		strcpy(concatenation, s1);
		strcat(concatenation, s2);
		printf("The concatenation of the two strings is: %s \n", concatenation);

		strcpy(s3, s1);
		printf("The third string is: %s \n", s3);

		int comp = strcmp(s1, s2); /*Camparison between string 1 and 2*/
		if(comp < 0) {
      		printf("String 1 is less than String 2\n");
   		} else if(comp > 0) {
      		printf("String 2 is less than String 1\n");
   		} else {
      		printf("String 1 is equal to String 2\n");
   		}

		printf("Enter character:\n");
		scanf ("%c", &c);

		printf("The index(s) of the occurence(s) of the character is: \n");
		int exists = 0;
		for(i = 0; s1[i] != '\0'; ++i){
			if (s1[i] == c) {
				printf("%d ", i); 
				exists = 1; 
			} 
		}
		printf("\n");

		if (exists == 0) printf("Character does not exist in the first string.\n");

		return 0;
	}