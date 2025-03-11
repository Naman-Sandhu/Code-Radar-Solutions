#include<stdio.h>
int main(){
    int number;
    int n;
    printf("");
    scanf("%d %d",&number,&n);
    int bit =(number>>n)&1;
    printf("%d", bit);
}