#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
struct Queue
{
    int front,rear,size;
    int capacity;
    int *array;
};
pthread_mutex_t lock;
int enqueue(struct Queue *queue)
{
   int i =0;
   for(int k=0;k<10;k++){
    printf("In enqueue thread\n");
    if (queue->rear == (queue->capacity-1) && queue->front == 0){
        printf("Queue is Full\n");
        printf("value of enqueue is %d %d\n",queue->rear,queue->capacity);}
    else if (queue->rear == queue->front-1)
        printf("Queue is full as rear is back of front rear is %d front is %d\n",queue->rear,queue->front);
    else if(queue->rear == -1 && queue->front == -1){
        queue->rear =0;
        queue->size =0;
        queue->front=0;
        queue->array[queue->rear] = ++i;
        printf("value of rear is %d and front is %d in first place \n",queue->rear,queue->front);
        }
    else if(queue->rear == (queue->capacity-1) && queue->front != 0){
        queue->rear = 0;
        queue->size = 0;
        printf("value of queue->rear is  %d in queue->capacity\n",queue->rear);
        queue->array[queue->rear] = ++i;}
    else{
        queue->rear = queue->rear+1;
        queue->size = queue->size+1;
        queue->array[queue->rear] = ++i;
        printf("value of rear is %d\n",queue->rear);

        }
       }
}
int dequeue(struct Queue *queue)
{
   for(int s=0;s<10;s++){
       printf("in dequeue thread and front is %d and rear is %d\n",queue->front,queue->rear);
       if(queue->front == queue->rear){
           printf("in dequeue thread and front is %d and rear is %d\n",queue->front,queue->rear);
           printf("Queue is underflow\n");}
       else if(queue->front == (queue->capacity-1)){
           queue->front = 0;
           printf("queue->front is %d\n",queue->front);}
       else{
           queue->front = queue->front+1;
           printf("dequeue postion is %d and value %d\n",queue->front,queue->array[queue->front]);
           queue->array[queue->front] = -1;
           printf("After dequeuing value is %d and %d\n",queue->front,queue->array[queue->front]);
           }}
}
int main()
{
   struct Queue *queue;
   queue = (struct Queue*)malloc(sizeof(struct Queue));
   pthread_t thid[2];
   queue->front = -1;
   queue->rear = -1;
   queue->capacity = 5;
   queue->size = -1;
   queue->array = (int*)malloc(sizeof(int)*queue->capacity);
   enqueue(queue);
   dequeue(queue);
   
}
