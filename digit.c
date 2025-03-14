#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int get_digit(int number, int column);

int main() {
	// test cases
		printf("\n");
		printf("Input: %d,\t Actual: %d\n", 2025, get_digit(2025, 2));
		
		for (int x = 0; x < 10; x++) {
			int i = rand();
			printf("\nInput: %d, Output %d",i, get_digit(i, 4));
		}
		printf("\n");


}

int get_digit(int number, int column) {
	// 255, 2 returns 5
	// 6543, 1 returns 3
	// 9289, 4 returns  9
	return (int) ((number % (int)pow(10, column ))) / (int) (pow(10, (column -1)));
}


