#include<stdio.h>
int sum(int n){
    int s = 0;
    int rem = 0;
    int temp = n;
    while(temp != 0){
        rem = temp%10;
        s+=rem;
        temp=temp/10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int arr2[n];
    int k = 0;
    int y = 0;
    for(int i=0;i<n;i++){
        y = arr[i];
        arr2[k++] = sum(y);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
}
