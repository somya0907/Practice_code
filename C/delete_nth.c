#include<stdio.h>
int main()
{
    int  arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0;i<10;i++)
    {
         if (i >=3)
         {
              arr[i] = arr[i+1];
         }
    }
    for(j=0;j<9;j++)
    {
        printf("%d\n",arr[j]);
    }
}
