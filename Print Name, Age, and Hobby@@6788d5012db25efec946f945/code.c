#include <stdio.h>
int main(){
    char name[50];
    int age;
    char hobby[50];
    scanf("%s %d %s",&name , &age , &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n",name,age,hobby);
}