#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int max = array[0]; 
    int min = array[0];
    for(int i = 0 ; i < size ; i++){
        if(array[i]>max){
            max=array[i];
        }
        else if(array[i]<min){
            min=array[i];
        }
    }
    printf("%d %d",min,max);
}