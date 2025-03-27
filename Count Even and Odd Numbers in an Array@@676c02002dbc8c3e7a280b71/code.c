#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i =0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    int count=0;
    int count 1 =0;
    for(int i = 0 ; i < size ; i++){
        if(array[i]%2==0){
            count++;
        }
        else {
            count1++;
        }
    }
    int even[count];
    int odd[count1];
    int k = 0;
    int j = 0;
    for(int i =0 ; i < size ; i++){
        if(array[i]%2==0){
            even[k++]=array[i];
        }
        else{
            odd[j++]=array[i];
        }
    }
    printf("%d %d",even,odd);
}
