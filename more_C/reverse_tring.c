#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char s[] = "I love programming in codewin";
   char reverse[20];
   int j =0;
 //  reverse = malloc(sizeof(char)*strlen(s+1));
   printf("value of reverse is %p\n",reverse);
   for(int i=strlen(s);i>=0;i--)
   {
      printf("value of j is %d\n",j);
      printf("value of s[i[ is %c\n",s[i]);
      reverse[j] = s[i];
      printf("value of reverse is %c\n",reverse[j]);
      //(reverse+j) = (s + i);
       
      j++;
   }
      
   printf("value of reverse is %s\n",reverse);
}
