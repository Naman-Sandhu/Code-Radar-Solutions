#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i =0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int even = 0  ;
    int odd = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(even==0 && array[i]%2==0){
            even = array[i];
            
        }
        
        else if (odd==0 && array[i]%2!=0){
            odd = array[i] ;
          
        }
        

    }
    printf("%d %d",even,odd);
}