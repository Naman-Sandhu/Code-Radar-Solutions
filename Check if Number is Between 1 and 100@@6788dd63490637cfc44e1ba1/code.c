#include <stdio.h>
int range(int n){
    for(int i=1 ; i<100 ; i++){
        if(i<=100){
            return 1;
        }
    }
}
int main() {
    int x;
    scanf("%d",&x);
    if(range(x)){
        printf("In Range");

    }
    else if (range(x)<1 && range(x)>100){
        printf("Out of Range");
    }
 
}
