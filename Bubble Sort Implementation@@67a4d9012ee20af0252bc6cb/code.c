#include<stdio.h>
void printArray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
    printf("%d ",arr[i]);
}
}
void bubbleSort(int arr[],int n){
    int temp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - 1 ; j++ ){
            if(arr[j]>arr[j+1])
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    printf("%d",arr);
    
}


