/*
	Name: Nick Hodge (Hodge1nr)	Class: CPS470
	Section: 22377311		Assignment: 04
	Due: 3/5/20			Points: 10

	Description: Used to call _mycall system call. Command line
	arguements are passed from a4.c and then entered into global
	message type. The message values are passed to _mycall system
	call. The system call puts the calculated values back into global
	message type and these values are saved to the pointer values
	that point back to a4.c.
	Returns 0 on success and -1 on failure.  
*/

#include <lib.h>

int mycall(int a, int b, int *sum, int *difr, int *prod) {

	message m;
	int r;

	m.m1_i1 = a;
	m.m1_i2 = b;
	
	r = _syscall(MM, 58, &m);
	if (r < 0) return -1;
	*sum = m.m1_i1;
	*difr = m.m1_i2;
	*prod = m.m1_i3;

	return r;
}
