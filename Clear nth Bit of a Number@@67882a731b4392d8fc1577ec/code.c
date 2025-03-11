#include<stdio.h>
int main(){
    int num, n;
    printf("");
    scanf("%d %d",&num,&n);
    int mask = ~(1 << n);
    int result = num & mask;
    printf("%d",result);
}