#include <stdio.h>

int main() {
   char ch; 
   printf(" ");
   scanf("%c", &ch);  

   printf("The ASCII value of '%c' is: %d\n", ch, (int)ch);  

   return 0;
}
