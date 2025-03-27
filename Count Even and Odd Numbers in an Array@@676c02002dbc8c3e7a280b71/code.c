#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i =0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int even =0  ;
    int odd = 0 ;
    int found_even = 0; 
    int found_odd = 0; 
    for(int i = 0 ; i < size ; i++){
        if(array[i]%2==0){
            even = array[i];
            found_even=1;
        }
        else if (array[i]%2!=0){
            odd = array[i];
            found_odd=1;
        }
        else if (found_even && found_odd) {
            break;
    }
    printf("%d %d",&even,&odd);
}
}