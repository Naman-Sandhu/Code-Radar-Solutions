#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
int max=0;
int second ;
for(int i = 0 ; i < size ; i++){
    if(array[i]>max){
     max=array[i]
     array[i]=second;
    }
}
printf("%d",second);
}