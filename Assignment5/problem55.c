/*
JTSK-320111
a5 p5.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) {
	int cons = 0; /*number of consonent in the string*/
	for (char *i = str; *i != '\n'; ++i)
	{
		cons++;
		if ((*i == 'a') || (*i == 'e') || (*i == 'i') || (*i == 'o') || (*i == 'u') ||
			(*i == 'A') || (*i == 'E') || (*i == 'I') || (*i == 'O') || (*i == 'U') ||
			(*i < 64) || (*i > 122) || (*i > 91 && *i < 97)) {
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