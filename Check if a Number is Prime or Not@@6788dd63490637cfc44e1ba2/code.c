#include<stdio.h>
int prime(){
    int n;
     if (n <= 1) {
        return 0;
    } 
    
    for(int i = 2 ; i < n ; i++){
        if(n%i==0){
        return 1;
         }
          }
    return 0;
}
int main(){
    int x;
    scanf("%d",&x);
    if(prime(x)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}