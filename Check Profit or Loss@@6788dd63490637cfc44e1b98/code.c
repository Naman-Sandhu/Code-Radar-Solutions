#include<stdio.h>
int main(){
    int cs_price , sl_price;
    scanf("%d %d",&cs_price,&sl_price);
    profit=cs_price+sl_price;
    Loss=cs_price-sl_price;
    if(profit>Loss){
        printf("Profit");
    }
    else if(Loss>profit){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }

}