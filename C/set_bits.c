#include<stdio.h>
int main()
{
  int n = 6;
  int count = 0,res=0,i;
  for(i=0;i<32;i++)
  {
     res = n & (1<<i);
     printf("Value of res is %d\n",res); 
     if (res)
       count = count+1;
   }
   printf("value of count is %d\n",count);
}
