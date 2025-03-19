#include<stdio.h>
#include<ctype.h>
int main(){
    int ch;
    scanf("%d %d",&cap,&lil);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("Lowercase");
    }
}