#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c && a>c>b){
        printf("%d",a);
    }
    else if(b>a>c && b>c>a){
        printf("%d",b);
    }
    else if(c>a>b && c>b>a){
        printf("%d",c);
    }
}