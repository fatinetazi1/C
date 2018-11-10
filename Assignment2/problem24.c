/*
JTSK-320111
a2 p4.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	double celcius;
	printf ("Enter degrees in Celcius: ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%lf", &celcius);
	double fahrenheit = ((9.0/5.0)*celcius) + 32; /*Converts Celcius to Fahrenheit*/
	printf("Celcius value converted to fahrenheit: %lf.\n", fahrenheit);
	return 0;
}