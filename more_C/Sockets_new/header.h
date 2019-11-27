#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<string.h>
#define PORT 8000
struct Queue{

    int capacity;
    int size;
    int front;
    int rear;
    int *arr;
}*queue;
struct data{
    char arr[30];
    int a;
};
//__attribute__((packed,aligned(1)));

 

