#include<stdio.h>

int printArray(int arr[] ,int n){
    for(int i = 0 ; i < n ; i++ ){
        printf("%d",arr[i]);
    }
}
int bubbleSort(int arr[],int n){
    int temp = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; i < n-1 ; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}