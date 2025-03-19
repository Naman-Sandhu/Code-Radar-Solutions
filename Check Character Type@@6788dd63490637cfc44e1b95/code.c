#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)) {
        printf("Special Character");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}