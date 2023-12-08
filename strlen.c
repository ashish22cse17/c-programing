#include <stdio.h>
#include <string.h>

int main() {
   char str[100]; // assuming the input string will be no longer than 100 characters

   printf("Enter a string: ");
   gets(str);

   int length = strlen(str);

   printf("The length of the string is: %d\n", length);

   return 0;
}