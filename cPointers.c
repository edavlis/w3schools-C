#include <stdio.h>

int main() {

	int variable = 12;
	int* ptrVariable = &variable; // points to a data type of int
	
	printf("%d\n%p\n%p\n", variable, &variable, ptrVariable);

	// defreferencing a pointer
	// effectivley showing WHAT the pointer points to
	printf("%d\n", *ptrVariable);

	// there are two way to declare a pointer variable
	int* myPointer = &variable;
	int *myPointer2 = &variable;

	// when * is used in declaration (declar. of variables), it creates a pointer variable. when NOT used in a declaration, it acts as a dereference operator

}
