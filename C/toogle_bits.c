#include<stdio.h>
int main()
{
  int i = 0.res = 0;
  int n = 1;
  for(i=0;i<9;i++)
  {
    printf("Value of i is %d\n",i);
    if( i == 5)
      continue;
    else
   {
     res = n ^ (1<<i);
  //   printf("Value of i is %d\n",i);
//     printf("value of res is %d\n",res);
   }

  }
//  printf("value of res is %d\n",res);
}
    
