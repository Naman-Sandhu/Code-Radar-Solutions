#include <stdio.h>

int main() {
    int lowerBound, upperBound;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lowerBound);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upperBound);

   
    for (int i = 1; i <= 100; i++) {
        if (i >= lowerBound && i <= upperBound) {
            printf("In Range", i);
        } else {
            printf("Out of Range", i);
        }
    }

    return 0;
}
