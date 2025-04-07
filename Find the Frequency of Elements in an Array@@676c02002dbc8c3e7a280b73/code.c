#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==arr[i]){
            count++;
        }
    }
    int element[count];
    for(int i = 0 ; i < size ; i++){
        if(arr[i]=arr[i]){
            element[count]=arr[i];
        }
    }
    printf("%d",element);
}