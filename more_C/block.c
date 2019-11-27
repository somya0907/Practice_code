#include<stdio.h>
int main()
{
   extern int xyz;
  {
       int xyz = 10;
      printf("value of xyz is %d\n",xyz);
      printf("hello2\n");
  
  {
     int xyz = 0;
     //printf("value of xyz is %d\n",xyz);
  }
  }
}
