#include <stdio.h>

int main() {
	int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", sizeof(myNumbers)); // prints the size of the array, 4 bytes per index, 4 * 10 = 40
	
	int arraySize = sizeof(myNumbers) / myNumbers[0]; // size of array divided by first element in the array's size
	return 0;	

}
