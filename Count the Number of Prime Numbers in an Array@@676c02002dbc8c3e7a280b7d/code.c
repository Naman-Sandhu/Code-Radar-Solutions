#include<stdio.h>
#include <stdbool.h>
bool prime(int x){
    if (x <= 1) {
        return false;
    }
    for(int i = 2 ; i*i <= x ; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
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
     return 0;   
 }

// #include <stdio.h>
// #include <stdbool.h>

// bool prime(int x) {
//     if (x <= 1) {
//         return false;
//     }
//     for (int i = 2; i*i <= x; i++) {
//         if (x % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (prime(array[i])) {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }