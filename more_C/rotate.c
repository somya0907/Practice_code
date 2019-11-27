#include<stdio.h>
#define NO_OF_BITS 8
int main()
{
  char a = 64;
  char d = 2;
  char temp = a >> (NO_OF_BITS - d);
  a = a << d | a >> (NO_OF_BITS - d);
  printf("%d\n",a);
}

 
