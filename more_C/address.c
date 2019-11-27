#include<stdio.h>
int* fun(int a[])
{
  a = a+1;
  return a;
}  
int main()
{
  int a = 10;
//   int a[] = {1,2,3};
  int *ptr = NULL;
  printf("%p\n",&a);
  ptr = fun(&a);
  printf("%p\n",ptr);
  ptr = ptr+1;
//  printf("%p\n",ptr);
}

