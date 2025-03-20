#include<stdio.h>
int prime(){
    int n;
     if (n <= 1) {
        return 0;
    } 
    
    for(int i =2 ; i*i < n ; i++){
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
    else if(x>2){
        printf("Not Prime");
    }
    else{
        printf("Not Prime");
    }
}