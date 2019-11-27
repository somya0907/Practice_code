#include<stdio.h>
int main()
{
    for(int i=5;i>=0;i--)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
                printf("*");
        }
      printf("\n");  
    }
}
