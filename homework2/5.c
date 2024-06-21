#include <stdio.h>

int main() {
    char arr[100];
    int i = 0, length = 0;

    printf("Enter the array of characters: ");
    scanf("%s", arr);

    for (length = 0; arr[length] != '\0'; length++);
    printf("Array in reverse order: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }

    return 0;
}
