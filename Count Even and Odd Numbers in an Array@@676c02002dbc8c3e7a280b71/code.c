#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i =0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int even_count =0  ;
    int odd_count  = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(array[i]%2==0){
            even_count++;
            
        }
        
        else if (array[i]%2!=0){
            odd_count++ ;
          
        }
    

    }
    printf("%d %d",even_count,odd_count);
}