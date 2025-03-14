#include <stdio.h>

int main() {

	int x = 213;
	switch (x) {
		case 21:
			printf("x = 21");
			break; // break out of the switch statment.
		case 32:
			printf("x is 32");
			break;
		default: // run if nothing else passes
			printf("x is 213");
			break;
	}

}
