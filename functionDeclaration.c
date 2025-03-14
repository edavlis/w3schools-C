// in c it's better to declare a function like betterFunction() than worseFunction
// function declarations should be above the main function (for optimisation)
// it also allows for function recurstion

#include <stdio.h>
int betterFunction(int x);

int worseFunction(int x) {
	return x * x;
}

int otherFunction(int x);
int main() {
	printf("%d\n",betterFunction(4));
	printf("%d\n",worseFunction(4));
	printf("%d\n",otherFunction(4));

	return 0;
}


int betterFunction(int x) {
	return x*x;
}

// as long as you declare functions at the top of a file, you can use those functions in other functions too.

int otherFunction(int x) {
	return (x) - betterFunction(x);
}
