#include <stdio.h>

int main() {
    int num = 0, reversedNum = 0, balance = 0;
    printf("Enter an integer greater than 12: ");
    scanf("%d", &num);

    while (num != 0) {
        balance = num % 10;
        reversedNum = reversedNum * 10 + balance;
        num /= 10;
    }

    printf("Number in reverse order: %d\n", reversedNum);

    return 0;
}
