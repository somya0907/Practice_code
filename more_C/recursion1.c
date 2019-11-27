#include<stdio.h>


int fun1(int x, int y)  
{ 
  if(x == 0) 
    return y; 
  else
    printf("value of y is %d\n",y);
    return fun1(x - 1,  x + y); 
}


int main()
{
   int x =0,y=0;
   x = 5;
   y = 2;
   fun1(5,2);
}
