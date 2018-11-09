/*
JTSK-320111
a6 p9.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char file1[100]; // file 1
	char file2[100]; // file 2

	printf("Enter first file:\n");
	fgets(file1, sizeof(file1), stdin);
	file1[strlen(file1)-1]='\0';

	
	printf("Enter second file:\n");
	fgets(file2, sizeof(file2), stdin);
	file2[strlen(file2)-1]='\0';

	FILE *input1=fopen(file1, "r"); //opening first file
	FILE *input2=fopen(file2, "r"); // opening second file

	int a; // value in first file
	fscanf (input1, "%d", &a);

	int b; // value in second file
	fscanf (input2, "%d", &b);

	if(input1==NULL || input2==NULL)
	{
		printf("Error!\n");
		exit(1);
	}

	int sum = a+b; // sum of values

	FILE *output=fopen("sum.txt", "w");
	fprintf(output, "%d", sum);
	if(output==NULL)
	{
		printf("Error!\n");
		exit(1);
	}

	fclose(input1);
	fclose(input2);
	fclose(output);
	return 0;
}