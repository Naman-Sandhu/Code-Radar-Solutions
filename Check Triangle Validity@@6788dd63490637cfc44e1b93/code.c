//two side sum is > third side
#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>s3){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}