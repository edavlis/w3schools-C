#include <stdio.h>


int main() {
	int myNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%d\n",myNumbers);
	printf("%d\n",myNumbers[3]);
	myNumbers[0] = 21;
	printf("%d\n",myNumbers);
}
