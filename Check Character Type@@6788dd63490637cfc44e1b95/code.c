#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        printf("Vowel");
    }
    else if(isalpha(ch)) {
        printf("Consonant");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
}