#include<stdio.h>
int main()
{
  int i = 0;
  for(i=0;i<5;i++)
  {
     static int y = 5;
     printf("value of y is %d\n",y);
     y++;
  }
}
