#include<stdio.h>
int main()
{
  char a = 'z';
  char b = 'b';
  a = a^b;
  b = a^b;
  a = b^a;
  printf("%c\n", a);
  printf("%c\n", b);
}
