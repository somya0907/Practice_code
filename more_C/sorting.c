#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *arr= NULL;
    int i,j,k,l,m,min_value = 0,swap = 0;
    printf("Enter the count\n");
    scanf("%d",&k);
    printf("Enter the Numbers\n");
    arr = (int*)malloc(sizeof(int)*k);
    for(m=0;m<k;m++)
    {
      scanf("%d",(arr+m));
    }
      
    for(i=0;i<k;i++)
    {  
        min_value = arr[i];
        for(j=i+1;j<k;j++)
        {
            if (min_value > arr[j]){
                swap = min_value;
                min_value = arr[j];
                printf("%d\n",min_value);
                arr[j] = swap;
              }
                
        }
        arr[i] = min_value;
        printf("arr[i[ is %d\n",arr[i]);
     }  


   for(l=0;l<k;l++)
   {
      printf("%d\n",arr[l]);
   }
} 
                 
            
        


