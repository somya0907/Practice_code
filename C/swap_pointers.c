#include<stdio.h>
int swap_two()
{
   int a = 10;
   int b = 20;
   a = a ^ b;
   printf

int main()
{
   int a = 10;
   int b = 11;
   int *p = NULL;
   p = &a;
   int *q = NULL;
   q = &b;
   int *c = NULL;
   c = p;
   p = q;
   q = c;
   
   printf("value of p is %d\n",*p);
}
