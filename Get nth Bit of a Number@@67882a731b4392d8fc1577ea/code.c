#include<stdio.h>
int main(){
    int number =5;
    int n=0;
    printf("");
    scanf("%d %d",&number,&n);
    int bit =(number>>n)&1;
    printf(" %d",  bit);
}