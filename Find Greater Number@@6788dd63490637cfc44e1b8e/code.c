#include<stdio.h>
int main(){
    int n ,m;
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("%d",n);
    }
    else if(m>n){
        printf("%d",m);
    }
    else{
        printf("0");

    }
    
}