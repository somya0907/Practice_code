#include<stdio.h>
int arr[10];
int i = 0;
int n =10;
int sum = 0;

int main()
{
    printf("Enter the 10 numbers\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        sum = sum + arr[i];
    }
    printf("Addition of numbers are\n");
    printf("%d\n",sum);
}
    

