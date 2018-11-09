/*
JTSK-320111
a5 p5.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_consonants(char str[]) {
	str[strlen(str)-1]='\0';
	int dim = strlen(str); /*dimension of the string*/
	int cons=0; /*number of consonent in the string*/
	char *string = (char*) malloc(sizeof(char)*dim);
	if (string==NULL)
	{
		printf("Some error occured.\n");
		exit(1);
	}
	for (int i = 0; i < dim; ++i)
	{
		string[i] = str[i];
	}
	for (int i = 0; i < dim; ++i)
	{
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'u' || string[i] == 'o' || 
			string[i] == 'U' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O') {
			cons++;
		} 
	}
	free(string);
	return cons;
}

int main() {
	char value[100]; /*string entered*/
	//char str[100];
	while (value[0] != '\0') {
	printf("Enter string:\n");
	fgets(value, sizeof(value), stdin);
	//sscanf (value, "%s", str);
	printf("The number of constants in the string is: %d\n", count_consonants(value));
	}
	return 0;
}