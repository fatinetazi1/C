/*
JTSK-320111
a6 p10.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr=fopen("text.txt", "r"); // opening text file
	if(fptr==NULL)
	{
		printf("Error!\n");
		exit(1);
	}

	char ch; // char in text file
	FILE *fptr2=fopen("text_copy.txt", "w"); // opening a file to copy in
	if(fptr2==NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	while((ch=getc(fptr))!=EOF)
	{
		fprintf(fptr2, "%c", ch);
	}

	fclose(fptr);
	fclose(fptr2);
	return 0;
}