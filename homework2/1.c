#include <stdio.h>

int main() {
    int num = 10;
    float dec = 3.14;
    char letter = 'A';

    int *ptr_num = &num;
    float *ptr_dec = &dec;
    char *ptr_letter = &letter;

    printf("Address of num: %p\n", &ptr_num);
    printf("Address of dec: %p\n", &ptr_dec);
    printf("Address of letter: %p\n", &ptr_letter);

    return 0;
}
