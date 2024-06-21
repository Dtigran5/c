#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int size = sizeof(array1) / sizeof(array1[0]);
    int equal = 1;

    for (int i = 0; i < size; i++) {
        if (array1[i] != array2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal)
        printf("Arrays are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}
