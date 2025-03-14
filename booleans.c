#include <stdbool.h>
#include <stdio.h>
// in C you have to import booleans?????
int main() {

bool isCSimple = true;
bool doesCDoLessThatTheBareMinimum = true;
bool isRustBetter = false;
printf("%d\n%d\n%d\n", isCSimple, doesCDoLessThatTheBareMinimum, isRustBetter); // booleans are represented as numerical values

printf("%d\n", 34 > 33); // printing if the statment 34 > 33 is true or false
printf("%d\n", isCSimple == isRustBetter); // checking if both statments are the same
return 0;
}

