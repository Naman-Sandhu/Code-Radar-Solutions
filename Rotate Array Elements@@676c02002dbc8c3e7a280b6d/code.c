#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    
    // Input array elements
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Non-repeating elements in reverse order:\n");
    
    // Array to track printed elements
    int printed[size];
    for(int i = 0; i < size; i++) {
        printed[i] = 0; // Initialize to not printed
    }

    // Iterate backwards through the array
    for(int i = size-1; i >= 0; i--) {
        // Check if we've already printed this value
        int is_duplicate = 0;
        for(int j = size-1; j > i; j--) {
            if(array[i] == array[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        // If not a duplicate, print it
        if(!is_duplicate) {
            printf("%d ", array[i]);
        }
    }
    
    return 0;
}