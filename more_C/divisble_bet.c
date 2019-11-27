#include<stdio.h>
int divisible(int m,int n)
{
    int i=0;
    int sum = 0;
    for(i=m;i<n;i++){
        if((i%3==0) && (i%5==0))
            sum = sum+i;
    printf("value of sum is %d\n",sum);}
    return sum;
}   
int main()
{
    int sum = 0;
    sum = divisible(12,50);
    printf("value of sum is in main %d\n",sum);
}
      
