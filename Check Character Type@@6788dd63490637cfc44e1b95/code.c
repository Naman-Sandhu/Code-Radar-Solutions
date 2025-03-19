#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        printf("Vowel");
    }
    else if(ch=='!' || ch=='@' || ch=='#' || ch=='$') {
        printf("Special Character");
    }
    else if(ch==5){
        printf("Digit");
    }
}