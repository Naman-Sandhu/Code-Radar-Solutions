#include<stdio.h>
int bubbleSort(int arr[],int n){
    int temp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - 1 ; j++ ){
            if(arr[j]>arr[j+1])
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    
}
int printArray(int arr[],int n){
    printf("%d",arr[i]);
}

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    } 
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0 ;

}