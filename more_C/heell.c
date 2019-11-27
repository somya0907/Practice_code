#include<stdio.h>
#include<signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int g_flag;
void sighandler(int signum )
{
  //shared_write();
  if ( signum == SIGINT || signum == SIGTERM )
  {
    printf("Signal is invoked\n");
    
  }

}

int shared_write()
{
      key_t key = 1234;
      int d = 9;
      printf("key is %d\n",key);
      int shmid = shmget(key,1024,0644|IPC_CREAT);
      int *data = (int *)shmat(shmid,(void*)0,0);
      *data = d;
      
}

int main()
{
   signal(SIGINT, sighandler );
   while(1)
   {
     printf("hello world\n");
   }
   printf("hello aunty");
}

