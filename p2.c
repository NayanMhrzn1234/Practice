#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Ask user for number of elements
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted numbers: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}