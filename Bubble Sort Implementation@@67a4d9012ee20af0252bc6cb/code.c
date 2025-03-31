#include <stdio.h>

int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Add a space after printing each number
    }
    printf("\n");  // To move to the next line after printing all the numbers
}

int bubbleSort(int arr[], int n) {
    int temp = 0;
    for (int i = 0; i < n-1; i++) {  // Fixed the loop condition
        for (int j = 0; j < n-i-1; j++) {  // Fixed the loop condition
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Fix: passing address to scanf
    }
    
    bubbleSort(arr, n);  // Sort the array
    printArray(arr, n);  // Print the sorted array
    return 0;
}
