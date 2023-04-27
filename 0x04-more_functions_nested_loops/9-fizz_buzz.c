#include <stdio.h>

/**
*main - Entry point
*prints 1 to 100
* prints Fizz for multiples of 3
* Buzz for multiples of 5
* FizzBuzz for multiples of 3 and 5
*/
int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
