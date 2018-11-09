/*
JTSK-320111
a2 p3.c
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <stdio.h>

int main() {
	char line [100];

	double hour;
	double minute;
	double second;
	printf ("Enter hour(s): ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%lf", &hour);
	printf ("Enter minute(s): ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%lf", &minute);
	printf ("Enter second(s): ");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%lf", &second);
	double total = (hour*3600.0) + (minute*60.0) + (second); 
	/*Total of hours, minutes and seconds in seconds*/
	printf("Total of hour(s), minute(s) and second(s) expressed in second(s): %lf.\n", total);
	return 0;
}