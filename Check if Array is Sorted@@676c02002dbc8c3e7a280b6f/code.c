#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int sorted=0;
    for(int i = 0 ; i < size - 1 ; i++){
        if(array[i]>array[i+1]){
            sorted = 1;
            break;
        }
    }
    if(sorted==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}