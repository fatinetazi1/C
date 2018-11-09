/*
JTSK-320111
a6 p8.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr=fopen("char.txt", "r"); // file in char
	if(fptr==NULL)
	{
		printf("Error!\n");
		exit(1);
	}

	char ch; //char values in ftpr
	FILE *fptr2=fopen("code.txt", "w"); // file in ASCII code
	if(fptr2==NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	while((ch=getc(fptr))!=EOF)
	{
		printf("%c", ch);
		fprintf(fptr2, "%d", ch);
	}

	fclose(fptr);
	fclose(fptr2);
	return 0;
}