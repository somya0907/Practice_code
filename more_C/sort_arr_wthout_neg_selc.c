#include<stdio.h>
int main()
{
   int arr[] = {2,-6,-3,8,4,1};
   int j=0;
   int length = sizeof(arr)/sizeof(int);
   printf("length is %d\n",length);
   for(int i=0;i<length;i++){
       if(key > 0)
           key = arr[i];
       else
           ++i;
       for(j=i+1;j<length;j++)
       {
          if(key > arr[j])
          {
              temp = arr[j];
              arr[j] = key;
              key = temp;
          }
        arr[i] = key;
       }
}
       
          
 }
       
