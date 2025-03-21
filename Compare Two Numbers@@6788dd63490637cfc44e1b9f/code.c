#include<stdio.h>
int main(){
    int n,m;
    escanf("%d",&n,&m);
    if(n>m){
        printf("First");
    }
    else if(m>n){
        printf("Second");
    }
    else if(m==n && n==m){
        printf("Equal");
    }
}