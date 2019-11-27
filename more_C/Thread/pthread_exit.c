#include<stdio.h>
#include<pthread.h>
#define LENGTH 5
void* print_thread(void* arg)
{
   int* thid = NULL;
   thid = (int*)arg;
   for(int i=0;i<20;i++){
       printf("thid %d is executing...\n",*thid);
   }
} 
int main()
{
    pthread_t thid[LENGTH];
    int a[5],k=0,i=0,p=0;
    for(i=0;i<LENGTH;i++)
    {
       a[i] = i;
       pthread_create(&thid[i],NULL,(void *)print_thread,(void*)&a[i]);
      // pthread_detach(thid[i]);
    }
    printf("hello aunty");
    pthread_exit(NULL);
    for(k=0;k<LENGTH;k++)
    {
       // pthread_join(thid[k],NULL);
       a[k]  = p;
    }
     printf("okk babay\n");
     //pthread_exit(NULL);
//   while(1);
}
