#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        printf("Vowel");
    }
    else if(isalpha(ch)) {
        printf("Special Character");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
}