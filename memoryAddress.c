#include <stdio.h>

int main() {

	// when a variable is created it is assigned a memory address
	// when you assign a value to the variable it is stored at the memory address

	int variable = 12;
	printf("%p\n", &variable); // use & before the variable name to print out the memory address
	// &variable is a pointer, we use the %p operator to print out pointers
	return 0;
}
