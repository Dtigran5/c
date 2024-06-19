#include <stdio.h>

int main() {
    char input = 0;
    char output;
    printf("Enter a symbol: ");
    scanf("%s", &input);

    output = input ^ 32;

    printf("Original: %c\n", input);
    printf("Converted: %c\n", output);

    return 0;
}
