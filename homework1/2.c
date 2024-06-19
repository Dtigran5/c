#include <stdio.h>

int main() {
    int number = 20;
    int n = 2;

    int multiplied_result = number << n;
    printf("Result of multiplication: %d\n", multiplied_result);

    int divided_result = number >> n;
    printf("Result of division: %d\n", divided_result);

    return 0;
}
