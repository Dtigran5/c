#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is odd.", num);
    } else {
        printf("%d is even.", num);
    }

    return 0;
}
