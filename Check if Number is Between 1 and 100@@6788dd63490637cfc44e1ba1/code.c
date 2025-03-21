#include <stdio.h>
int range(int n){
    for(int i=1 ; i<100 ; i++){
        if(i<=100){
            return 1;
        }
        else if(i<100 && i>100){
            return 0;
        }
    }
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
