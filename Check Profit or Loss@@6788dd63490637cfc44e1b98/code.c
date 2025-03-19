#include<stdio.h>
int main(){
    int pr,ls;
    scanf("%d %d",&pr,&ls);
    if(pr>ls){
        printf("Profit");
    }
    else if(ls>pr){
        printf("Loss");
    }

}