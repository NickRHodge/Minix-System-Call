/*
	Name: Nick Hodge (Hodge1nr)	Class: CPS470
	Section: 22377311		Assignment: 04
	Due: 3/5/20			Points: 10
	
	Description: Calls mycall() in mycall.c function to perform new
	_mycall system call, which performs the math of arg1 + arg2,
	 arg1 - arg2 and arg1 * arg2. Command line arguments are checked
	for correct input first. Once the system call returns the
	calculated results to mycall.c they are printed from a4.c 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a, b, d, p, r, s;

	int mycall(int a, int b, int *s, int *d, int *p);
	
	if (argc < 3 || argc > 3) {
		fprintf(stderr, "Error: Incorrect input\n");
		fprintf(stderr, "Usage: ./a4 a b \n");
		exit(1);

	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = mycall(a, b, &s, &d, &p);

	if (r == -1) {
		exit(1);
	}
	else {
		printf("Sum of %d and %d: %d\n", a, b, s);
		printf("Difference of %d and %d: %d\n", a, b, d);
		printf("Product of %d and %d: %d\n", a, b, p);
	}

	exit(0);
}
