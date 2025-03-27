#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum=sum+array[i];
    }
}