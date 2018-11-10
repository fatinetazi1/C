/*
JTSK-320111
a3 p1.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	int n = 2;
	while (n < 6) {
		printf("n is %d\n", n);
		n++;
	}
	printf("That’s it.\n");
	return 0;
}

/*
Explanation
The problem was that there were no brackets.
By adding the brackets, you tell your computer
where the while function  starts and terminates.
Not putting the brackets causes an endless loops
that will run until your computer crashes. 
*/
