#include <stdbool.h>
#include <math.h>
int get_digit(int number, int column) {
	return (int) ((number % (int)pow(10, column ))) / (int) (pow(10, (column -1)));
}

bool isHappy(int n) {
    
    int x = n;
    do {
        x = pow(get_digit(x,2), 2) + pow(get_digit(x,1), 2);
        if (x == 1) {
            return true;
        }
    }
    while (x != 1);
}
