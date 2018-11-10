/*
JTSK-320111
a4 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

	int x; /*global variable/stores length of the string*/

int length(char str[]) {
	int idx;
	/*Loop until end of string */
	for (idx = 0; str[idx] != '\0'; ++idx)
		/* do nothing */
	x = idx;
	return x;
}
int main() {
	char line[100];
	while(1) {
		printf("Enter string:\n");
		fgets(line, sizeof(line), stdin);
		printf("Length (including newline) is: %d\n", length(line));
	}
	return 0;
}

/*
Explanation
The reason why the output was always 0 is because the length of the 
string is inputed into a local variable that is directly destroyed 
after the function terminates. In order to fix this, a global variable
was created to store the value of the length of the string, which will
be used and will not output 0 because it was never destroyed.
*/