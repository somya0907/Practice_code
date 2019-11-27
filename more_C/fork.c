#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void* foo(void* a)
{
  printf("thread called\n");
  while(1){
     for(int i=0;i<10;i++){
     printf("hello aunty\n");}
     sleep(1);
     }
  return 0;
}
int main()
{
  pthread_t thd;
  void *ret = NULL;
  if(!fork())
  {
    printf("thread is called\n");
//    foo();
   pthread_create(&thd,NULL,&foo,(void*)NULL);
   pthread_detach(thd);
  //  pthread_join(thd,&ret);
    exit(1);
    //pthread_join(thd,&ret);
  }
  printf("After fork\n");
  while(1);
}
     
