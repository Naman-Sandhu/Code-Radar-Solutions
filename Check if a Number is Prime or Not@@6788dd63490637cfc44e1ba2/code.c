#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=0;
    for(int i=2 ; i<=n ; i++){
        if(i%n==0){
            printf(1);
        }
    }
    if(p==0){
        printf("Prime");
    }
    else{
        printf("Not a Prime");
    }
}