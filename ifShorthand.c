#include <stdio.h>

int main() {
	int x, y = 12;
	// instead of 
	if (x == y) {
		printf("they are equal!!");
	} else {
		printf("Not equal");
	}

	// you can do
	//  variable = (condition) ? expressionTrue : expressionFalse;
	(x == y) ? printf("they are equal") : printf("Not equal");
	return 0;
}
