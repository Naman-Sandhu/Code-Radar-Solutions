#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n,&m);
    if(n==m){
        printf("Equal");
    }
    else if(n>m){
        printf("First");
    } 
    else{
        printf("Second");
    }
   
}