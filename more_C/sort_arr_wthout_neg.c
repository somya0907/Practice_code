#include<stdio.h>
int main()
{
   int arr[] = {2,-6,-3,8,4,1};
   int j=0;
   int length = sizeof(arr)/sizeof(int);
   printf("length is %d\n",length);
   for(int i =1;i<length;i++){
       if(key < 0){
           ++i;
           printf("value of i is %d\n",i);}
       key = arr[i];
       j = i-1;
       while(j>=0 && arr[j] > key)
       {
           a[j+1] = a[j];
           j=j-1;
       }
       arr[j+1] = key;
  }
       
