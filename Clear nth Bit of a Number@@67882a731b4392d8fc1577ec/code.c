#include<stdio.h>
int main(){
    int n , number;
    printf("");
    scanf("%d %d",&n,&number);
    int mask = ~(1 << n);
    numbr = number & mask;
    printf("%d",numbr);
}