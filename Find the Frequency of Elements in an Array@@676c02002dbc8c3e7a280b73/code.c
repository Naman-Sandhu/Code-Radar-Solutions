#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];  // Declare the array of size n

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array and find the frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;  // Start counting the frequency of arr[i]

        // Check the frequency of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;  // Increment count if we find a match
                arr[j] = -1;  // Mark arr[j] as counted by setting it to -1
            }
        }

        // If arr[i] is not marked as counted, print the frequency
        if (arr[i] != -1) {
            printf("%d %d\n", arr[i], count);
        }
    }

    return 0;
}
