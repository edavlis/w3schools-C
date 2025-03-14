#include <stdio.h>
// hell on earth


int main() {

			int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

			for (int i = 0; i < 10; i++) {
				printf("%d\t%p\n", array[i], &array[i]);
			}
		
		// this will print out each value and memory address 
		// each memory adress is seperated by 4, as each value takes up 4 bytes
		
		// the name of the array is just a pointer to the first element of the array
			printf("\n\n\n\%p\n", array);
			printf("%p\n", &array[0]);
		// both have the same address
		
		// we can work with arrays through pointers, incrementing by one to go through each index
			printf("\n\n\n");
			printf("%d\n", *array); // first value of the array
			printf("%d\n", *(array+1)); // second value
			printf("%d\n", *(array+2)); // third value
		// or you could do a loop
			for (int i = 0; i < 10; i++) {
				printf("%d\n", *(array + i));
			}

		// you can also change the value of an array through pointers
		*array = 10; //first value = 10
		*(array + 1) = 9; //second value = 9
		return 0;
}
