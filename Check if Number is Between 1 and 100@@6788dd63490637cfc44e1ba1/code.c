#include <stdio.h>
int range(int n){
        if(n <= 100){
            return 1;
        }
        return 0;
}
int main() {
    int x;
    scanf("%d",&x);
    if(range(x)){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
 
}
