/*
JTSK-320111
a4 p8.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

	int main() {
		char value[100];

		char s1[50]; /*String 1*/
		char s2[50]; /*String 2*/
		char s3[50]; /*String 3*/
		char c; /*Character that will be looked for in s1*/
		printf("Enter first string:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%s", s1);
		printf("Enter second string:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%s", s2);

		char concatenation[100];
		strcpy(concatenation, s1);
		strcat(concatenation, s2);
		strcpy(s3, s1);
		int comp = strcmp(s1, s2); /*Camparison between string 1 and 2*/

		printf("The concatenation of the two strings is the following: %s \n", concatenation);
		printf("The third string is: %s \n", s3);
		printf("The comparison between s1 and s2 results in: %d. \n", comp);

		printf("Enter string(c):\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &c);

		int exists = 0;

		for (int i = 0; i < 50; ++i)
		{
			if (s1[i] == c) {
				printf("The position of the first occurence of the string(c) is: %d.\n", i); 
				exists = 1; 
			} 
		}
		if (exists == 0)
		{
			printf("String(c) does not exist in the first string(s1).\n");
		}

		return 0;
	}