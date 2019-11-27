#include<stdio.h>
#include<sys/socket.h>
#include<sys/type.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

 printf("%s is having pid is %d\n",__FILE__,getpid());
 int serverfd;
 struct sockaddr_un saddr;
 serverfd = socket(AF_UNIX,SOCK_STREAM,0);
 if(serverfd < 0)
 {
    perror("socket");
    exit(EXIT_FAILURE);
 }
 saddr.sin_family = AF_UNIX;
 saddr.sin_path = "SERVER SOCKET
 if(bind(socketFd,(const struct sockaddr *)&saddr,sizeof(saddr)) < 0)
 {
    return -1;
 }
 
 ret=listen(socketFd,7);


