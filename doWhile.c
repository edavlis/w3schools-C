#include <stdio.h>

int main() {
	
	
	// this	
		int i = 0;
		do {
			printf("i = %d\n", i);
			i++;
		}
		while (i < 100);

		
	// is the same as this
	int x = 0;
	x++;
	while (x < 100) {
		printf("x = %d\n",x);
		x++;
	}
	// the do {code} is part of the while loop, but on the first run it WILL execute, if that makes sense.
	return 0;
}
