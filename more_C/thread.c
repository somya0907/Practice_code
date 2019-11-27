#include<stdio.h>
#include<pthread.h>


int sum1 =0,sum2=0;int flag=1;
void* mythreadfun1(void *a)
{
    int i;
    int arr[50];
    sleep(5); 
    while(flag)
    {
     for(i=0;i<50;i++)
     {
       printf("value of i is %d\n",i);
       arr[i] = i;
       sum1 = arr[i]+sum1;
       printf("sum1 is %d\n",sum1);
     }
    }
     return NULL;
}

void* mythreadfun2(void *n)
{
   printf("in thread 2");
   int i,k;
   int arr[50];
   for(i=0;i<50;i++)
   {
       printf("In thread 2\n");
       k=50;
       arr[i]=k;
       sum2=arr[i]+sum2;
       k++;
      
       
   }
   return NULL;
}
int main()
{
    int sum = 0;
    pthread_t thread_id_1;
    pthread_t thread_id_2;
    pthread_create(&thread_id_1,NULL,mythreadfun1,NULL);
    pthread_create(&thread_id_2,NULL,mythreadfun2,NULL);
    pthread_join(thread_id_1,NULL);
    pthread_join(thread_id_2,NULL);
    sum = sum1+sum2;
    
    printf("sum is %d\n",sum);
}
    

