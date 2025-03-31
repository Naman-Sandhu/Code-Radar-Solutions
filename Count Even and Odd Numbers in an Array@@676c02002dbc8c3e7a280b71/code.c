#include<stdio.h>
int main(){
    int n ; 
    scanf("%d",&n);
    int array[];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int count = 0 ; 
    int count1 = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(array[i]%2==0){
            count++;
        }
        else if(array[i]%2!=0){
            count1++;
        }
    }
  printf("%d %d",count,count1);
}