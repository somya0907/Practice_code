#include<stdio.h>
int main()
{
  int x = 20, *y,*z;
  y = &x;
  z = y;
  //*++z;
//  *z++;
 // *++y;
  printf("Address of z is %p y is %p x is %p value of y is %d z is %d\n",z,y,&x,++*y,*z);
}
