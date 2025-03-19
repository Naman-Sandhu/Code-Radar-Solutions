#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u' || ch=='A' || ch=='I' || ch=='E' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else if(isalpha(ch)) {
        printf("Consonant");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}