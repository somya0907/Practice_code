#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10,11,12,13,14,15};
    int merge[15];
    int i,j,k;
    for(i=0;i<=15;i++)
    {
        if(i >= 5)
        {
            merge[i] = b[i-5];
        }   
        else
        {
          merge[i] = a[i];
        }
    }
    for(k=0;k<15;k++)
    {
       printf("%d\n",merge[k]);
    }
}

