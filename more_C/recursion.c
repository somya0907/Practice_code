#include<stdio.h>

int fun(int i)
{
  int k = 0;
  if(i==0)
     return 0;
  else
  {
    printf("Value of i before calling is %d\n",i);
    int p = fun(i-1);
    printf("value of p is %d\n",p);
    printf("Value of i after calling func 1st time is %d\n",i);
    fun(i-1);
    printf("Value of i after calling func 2nd time is %d\n",i);


  } 
}



int main()
{
   int i;
   i = 2;
   fun(i);
}

