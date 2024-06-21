#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr3[2*size];

    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i];
        arr3[i + size] = arr2[i];
    }

    printf("New Array: ");
    for (int i = 0; i < 2*size; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
