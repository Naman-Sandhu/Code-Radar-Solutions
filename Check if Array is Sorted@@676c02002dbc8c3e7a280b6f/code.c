#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

int sort = 1;
for(int i = 0 ; i < size ; i++ ){
    if(arr[i]>=arr[i+1]){
        sort = 0;
        break;
    }
}
if(sort==1){
    printf("Sorted");
}
else{
    printf("Not Sorted");
}
}