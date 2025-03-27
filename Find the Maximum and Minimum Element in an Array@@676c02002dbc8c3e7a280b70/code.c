#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    size=sizeof(array)/sizeof(array[0]);
    for(int i=0 ; i < size ; i++){
        scanf("%d",array[i]);
    }
    int max=0;
    int min=0;
    for(int i = 0 ; i < size ; i++){
        if(array[i]>max){
            max=max+array[i];
        }
        else if(array[i]<min){
            min=min+array[i];
        }
    }
}