#include<stdio.h>

int average(int *arr,int K,int count)
{
   int avg = 0,av=0,div=0;
   int picked = 0,average,k=0,sum=0,i=0,j=0,d=0;
   for(i=0;i<count;i++)
   {
     avg = arr[i];
     if (avg == K)
     {
        picked = picked + 1;
          printf("value of picked1 is %d\n",picked);
          printf("value if picked is %d at index %d\n",avg,i);
     }
     //printf("Value of i is %d\n",i);
     for(j=i+1;j<count;j++)
     {
        sum = arr[i] + arr[j];
        if(sum/2 == K && sum%2 == 0)
        {
           picked  = picked + 1;
           printf("value of sum is %d at index i%d\n",sum,j);
           printf("Value of picked is %d\n",picked);
        } 
         
       // printf("value of j is %d\n",j);
       // printf("value of i is %d\n",i);
        average = arr[i];
        for(k=i+1;k<j;k++)
        {
            av = arr[i];
            av = av + arr[k]+arr[k+1];
            div = k +1;
            if(av%div == 0 && av/div == K)
            {
               picked = picked+1;
               printf("value of picked4 is %d\n",picked);
            }
     //       printf("val of k is %d\n",arr[k]);
            average = average+arr[k]+arr[k+1];   
       //     printf("value of average is %d\n",average);
            d = j - i;
         //   printf("value of d in k is %d\n",d);
            if(i!=0)
            {
            d = d+1;
           // printf("value of d in k is %d\n",d);
            }
            if(average%d == 0 && average/d == K)
            {
                picked = picked + 1;
             //   printf("value of picked3 is %d\n",picked);
                continue;
            }
        }
    }
    }
     
} 

int main()
{

  int arr[] = {3,6,2,8,7,6,5,9};
  int K=5;
  int N = 0;
  N = sizeof(arr)/sizeof(arr[0]);
  average(arr,K,N);
  
}
