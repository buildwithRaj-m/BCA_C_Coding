#include <stdio.h>

int main() {
    // 1. Declare and initialize an array
    int arr[5] = {10, 20, 30, 40, 50};
    
    // 2. Print array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // 3. Find sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("\nSum of array: %d\n", sum);
    
    // 4. Find maximum element
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    
    // 5. 2D Array (Matrix)
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("\n2D Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 6. Reverse an array
    printf("\nReversed array:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}