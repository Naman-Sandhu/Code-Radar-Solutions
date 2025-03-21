#include<stdio.h>
int main(){
    int age;
    int cg;
    scanf("%d %d",&age,&cg);
    if(age>=18 && cg==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}