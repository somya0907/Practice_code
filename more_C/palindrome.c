#include<stdio.h>
#include<string.h>
int palindrome(char *str)
{
  int size = strlen(str);
  int i = 0;
  while(str[i]!='\0') 
  {
    
     if(str[i] == str[size-1])
     {
         printf("It is plaindrome\n");
         i++;
         size--;
     }
     else
     {
           
         printf("It is not palindrome\n");
         //break;
     }
  }
     
   
}
int main()
{
  char *str = "abcdcba";
  //char *new = "geeksforgeeks";
  palindrome(str);
}
