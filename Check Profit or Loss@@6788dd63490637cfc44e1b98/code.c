#include<stdio.h>
int main(){
    int cs_price , sl_price;
    scanf("%d %d",&cs_price,&sl_price);
    if(cs_price>sl_price){
        printf("Profit");
    }
    else if(sl_price>cs_price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss")
    }

}