#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c){
        printf("%d",a);
    }
    else if(b>a>c){
        printf("%d",b);
    }
    else if(c>a>c){
        printf("%d",c);
    }
}