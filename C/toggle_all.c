#include<stdio.h>
int main()
{
  int n = 32;
  int i = 0,res = 0;
  for(i=0;i<8;i++)
  {
     if( i == 5)
       continue;
     n = n ^ (1 << i);
     printf("value is %d\n",n);
   }
    
   printf("value of res is %d\n",n);
}     
