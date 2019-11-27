#include<stdio.h>
int main()
{
unsigned int i =1;
int a = 2147483650; 

  for(i =i<<31;i>0;i=i/2)
  {
    printf("value of i is %d\n",i);
  }
  
}
