/*
JTSK-320111
a5 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) {
	str[strlen(str)-1]='\0';
	int dim = strlen(str); /*dimension of the string*/
	int cons=dim; /*number of consonent in the string*/
	for (int i = 0; i < dim; ++i)
	{
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')) {
			cons--;
		} 
	}
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