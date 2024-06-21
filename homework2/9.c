#include <stdio.h>

int main() {
    int n = 0, i = 0, min = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Minimum value in the array: %d\n", min);
    
    return 0;
}
