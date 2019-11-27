#include <stdio.h>
#include <string.h>
int main () {
   const char str[20] = "Hello, are are you?";
   const char searchString[10] = "Hello";
   char *result;

   /* This function returns the pointer of the first occurrence
    * of the given string (i.e. searchString) 
    */ 
   result = strstr(str, searchString);
   printf("The substring starting from the given string: %s", result);
   return 0;
}
