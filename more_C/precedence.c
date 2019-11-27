#include<stdio.h>
int f2(int x)
{
  printf("hello\n");
  x = 5;
  return x;
}
int f1(int x)
{
   printf("aunty");
   x = 10;
   return x;
}
int main()
{
   int x = f1(3) + f2(4);
   printf("value of x is %d\n",x);
}
  

