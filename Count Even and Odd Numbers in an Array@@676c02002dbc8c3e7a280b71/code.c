#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i =0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int even = 0 ;
    int odd = 0;
    for(int i = 0 ; i < size ; i++){
        if(array[i]%2==0){
            even = i;
        }
        else {
            odd = i ;
        }
    }
    printf("%d %d",&even,&odd);
}