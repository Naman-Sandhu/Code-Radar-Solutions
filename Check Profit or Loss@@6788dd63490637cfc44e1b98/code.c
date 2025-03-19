#include<stdio.h>
int main(){
    int cs_price , sl_price;
    scanf("%d %d",&cs_price,&sl_price);
    int diff = sl_price-cs_price;
    if(diff>0){
        printf("Profit");
    }
    else if(diff<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}
