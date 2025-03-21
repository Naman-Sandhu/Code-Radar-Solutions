#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x <= 100 && x >= 1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}
