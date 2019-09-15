#include<stdio.h>
#include<stdlib.h>
int contigious_sum_array(int *arr,int n)
{
   int i,max_ending=0,max_ending_so_far=0;
   for(i=0;i<n;i++)
   {
      max_ending = max_ending + arr[i];
      if(max_ending < 0)
         max_ending = 0;
      if(max_ending > 0)
         max_ending_so_far = max_ending;
   }
      return max_ending_so_far;
}
   


int main()
{
  int *array = NULL;
  int i =0,total_sum = 0;
  printf("Enter the Array\n");
  array = (int*)malloc(sizeof(int)*10);
  for(i=0;i<10;i++)
  {
      scanf("%d",array+i);
  }
  total_sum = contigious_sum_array(array,10); 
  printf("total sum is %d\n",total_sum);
}



  

