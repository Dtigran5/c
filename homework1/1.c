#include <stdio.h>

int main() {
    int num = 5; 
    int n = 2;   

    if (num & (1 << n)) {
        printf("Bit is set at position %d\n", n);
    } else {
        printf("Bit is not set at position %d\n", n);
    }

    return 0;
}
