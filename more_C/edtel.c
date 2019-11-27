#include<stdio.h>
#include<stdlib.h>
int* foo()
{
   int a[5];
//   int* ptr = NULL;
  // ptr = (int*)malloc(sizeof(int));
//   ptr = a;
   a[0] = 1;
   a[1] = 2;
   return a;
}
int main()
{
   int *c = NULL;
   c = foo();
   sleep(5);
   printf("value of c is %d\n",*(c+0));
   printf("value of c is %d\n",*(c+1));
}
