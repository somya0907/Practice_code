#include<stdio.h>
int main()
{
  int n = 10,i;
  char c = 0X0a;
  int result = 4 << c;
  for(i = 1<<16;i>0;i = i/2)
  {
     int out = result & i;
     if(out)
         printf("1\n");
     else
         printf("0\n");
  }
     
  printf("%c\n",result);
}
  
