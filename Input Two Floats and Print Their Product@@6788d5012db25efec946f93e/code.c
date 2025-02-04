#include <stdio.h>

int main() {
    float n, m, p;  
    printf("Enter the first float number: ");
    scanf("%f", &n);
    printf("Enter the second float number: ");
    scanf("%f", &m);
    p = n * m;
    printf("The product of %.2f and %.2f is: %.2f\n", n, m, p);

    return 0;
}
