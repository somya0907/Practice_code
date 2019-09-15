#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t lock;
pthread_cond_t condition;
pthread_cond_t condition2;
int i = 1;
int k = 2;
int count = 0;
int done = 1;
void* odd_numbers(void *a)
{
     while(1)
     {
      if (i == 99)
        break;

        pthread_mutex_lock(&lock);
        printf("value of i is %d\n",i);
        i = i+2;
        sleep(1);
        pthread_cond_wait(&condition,&lock);
        //pthread_cond_signal(&condition2);
        pthread_mutex_unlock(&lock);
       }
    
   count = 1;
   return NULL;
}

void* even_numbers(void *b)
{
    while(1)
    {
      if(k==100)
        break;
      pthread_mutex_lock(&lock);
      printf("value of k is %d\n",k);
      k = k+2;
//      pthread_cond_wait(&condition2,&lock);
      pthread_mutex_unlock(&lock);
      pthread_cond_signal(&condition);
      //pthread_mutex_unlock(&lock);
      //sleep(1);
      printf("returning to main\n");
    }
    count = 2;
    return NULL;
   
}

int main()
{
   pthread_mutex_init(&lock,NULL);
   pthread_t thd1,thd2;
   pthread_create(&thd1,NULL,odd_numbers,NULL);
   sleep(1);
   pthread_create(&thd2,NULL,even_numbers,NULL);
   while(count != 2);
   
}   
