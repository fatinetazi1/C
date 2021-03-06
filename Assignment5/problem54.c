/*
JTSK-320111
a5 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) {
	int dim = strlen(str); /*dimension of the string*/
	str[dim-1]= '\0';
	int cons = dim; /*number of consonent in the string*/
	for (int i = 0; i < dim; ++i)
	{
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') ||
			(str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') ||
			(str[i] < 64) || (str[i] > 122) || (str[i] > 91 && str[i] < 97)) {
			cons--;
		} 
	}
	return cons;
}

int main() {
	char value[100]; /*string entered*/
	while (value[0] != '\n') {
		printf("Enter string:\n");
		fgets(value, sizeof(value), stdin);
		printf("The number of constants in the string is: %d\n", count_consonants(value));
	}
	return 0;
}