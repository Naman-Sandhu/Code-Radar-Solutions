#include <stdio.h>

int main() {
    char a[50], b[50];


    printf("");
    scanf("%49[^\n]", a);  
    
    getchar(); 
    printf("");
    scanf("%49[^\n]", b);
    printf("You entered: \"%s\" and \"%s\"\n", a, b);

    return 0;
}
