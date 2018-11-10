/*
JTSK-320111
a4 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

#include <stdio.h>
int length(char str[]) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx){
        /* do nothing */
    }
    return idx;
}
int main() {
    char line[100];
    while(1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("Length (including newline) is: %d\n", length(line));
	}
return 0; }

/*
Explanation
The reason it doesn't work is because it executes return idx in the 
first loop since there is no other command. You have to put {}.
*/