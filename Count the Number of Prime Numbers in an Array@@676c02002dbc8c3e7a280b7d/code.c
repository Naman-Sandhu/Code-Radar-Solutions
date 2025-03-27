#include<stdio.h>
bool prime(int x){
    int p = 1;
    for(int i = 0 ; i*i < x ; i++){
        if(x%i==0){
            p=0;
        }
    }
    if(p==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int count=0;
     for(int i = 0 ; i < size ; i++){
        if(prime(array[i])){
            count++;
        }
     }  
     printf("%d",count);    
 }