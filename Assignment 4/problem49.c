/*
JTSK-320111
a4 p9.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

	int main() {
		char value[100];

		char s1[50]; /*String 1*/
		char c; /*Character searched in string 1*/
		printf("Enter string:\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%s", s1);

		printf("Enter string(c):\n");
		fgets(value, sizeof(value), stdin);
		sscanf (value, "%c", &c);

		int length = strlen(s1);

		char *ptr_top = s1;
		char *last_occurance;
		while((ptr_top - s1 ) < length){
			last_occurance = strchr(ptr_top, c);
			if (last_occurance == NULL)
			{
				printf("There is no occurence of c in the string anymore. \n");
				break;
			} else {
				printf("Character c occured at the following position(s): %ld.\n", last_occurance - s1);
				ptr_top = last_occurance + 1;
			}
		}



		return 0;
	}