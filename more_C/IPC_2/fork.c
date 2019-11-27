#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

pid_t child_pid = -1;
void kill_child(int signum)
{
//    if(signum == SIGALARM)
        printf("hhelo aunty");
        kill(child_pid,SIGKILL);
        printf("hhelo aunty");

}
int main()
{
    //pid_t child_pid;
    signal(SIGALRM,kill_child);
    child_pid = fork();
    printf("Value of child_pid is %d\n",child_pid);
    if(child_pid)
    {
         printf("it is parent\n");
         alarm(30);
         wait(NULL);
    }
    else
         printf("it is chil\n");

}  
