#include<stdio.h>
#include<limits.h> // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max = INT_MIN;
    int sec = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            sec = max;  // Update second max before updating max
            max = array[i];
        } 
        else if (array[i] > sec && array[i] != max) {
            sec = array[i];
        }
    }

    if (sec == INT_MIN) {
        printf("-1");
    } else {
        printf("%d\n", sec);
    }

    return 0;
}