#include <stdio.h>

int main() {
    float n, m, p;  
    printf("Enter the first float number: ");
    scanf("%f", &n);
    printf("Enter the second float number: ");
    scanf("%f", &m);
    p = n * m;
    printf("Product: %.2f\n",p);

    return 0;
}
