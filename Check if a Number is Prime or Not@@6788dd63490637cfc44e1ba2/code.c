#include<stdio.h>
int prime(){
    if(n<2){
        return 0;
    }
    for(int i =2 ; i*i <=n ; i++){
        if(n%1==0){
        return 0;
         }
          }
    return 1;
}
int main(){
    int x;
    scanf("%d",&x);
    if(prime(x)){
        printf("Prime");
    }
    else{
        printf("Not a Prime");
    }
}