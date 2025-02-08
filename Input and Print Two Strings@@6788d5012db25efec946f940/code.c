#include <stdio.h>

int main() {
    char a[50];
    char b[50];

    printf("");
    scanf("%49[^\n]", a); 
    printf("");
    scanf("%49[^\n]", b);
    printf("You entered: %s and %s",a ,b);

    return 0;
}
