#include <stdio.h>

int main() {
    int num = 0, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 0) {
            binary += place;
            break;
        }
        num /= 2;
        place *= 10;
    }

    printf("Binary number after replacing the last 0 with 1: %d\n", binary);

    return 0;
}
