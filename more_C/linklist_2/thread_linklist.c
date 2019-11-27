#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int count = 0;
pthread_mutex_t lock;
struct Node
{
   int data;
   struct Node *next;
};


struct Node* create_node()
{
   struct Node *new_node=NULL;
   new_node = (struct Node*)malloc(sizeof(struct Node));
   new_node->next = NULL;
   return new_node;
}   

void* append_list(void* head_ref)
{
  while(1)
  {
    printf("In thread1\n");
    pthread_mutex_lock(&lock);
    struct Node *traverse = NULL;
    struct Node *last = NULL;
    struct Node *head = NULL;
    int i = 0;
  
    traverse = (struct Node*)head_ref;
    while(traverse->next)
    {
     traverse = traverse->next;
    }
    count = count +1;
    last = create_node();
    last->data = count;
    printf("Node added is last->data is %d\n",last->data);
    traverse->next = last;
    pthread_mutex_unlock(&lock);
  }
  return NULL;

}

void* delete_list(void *head_ref)
{
  while(1)
  {
    pthread_mutex_lock(&lock);
    printf("In thread2\n");
   // sleep(2);
    struct Node *traverse = NULL;
    struct Node *prev = NULL;
    traverse = (struct Node*)head_ref;
    if (traverse->next != NULL)
    {
        while(traverse->next)
        {
         prev = traverse;
         traverse = traverse->next;
        }
        printf("Node deleted of data is %d\n",traverse->data);
        count = count -1;
        free(traverse);
        prev->next = NULL;
        pthread_mutex_unlock(&lock);

    }
    else
    {
       pthread_mutex_unlock(&lock);
       sleep(1);
    }
  }
     return NULL;

}
  
void printlist(struct Node *head_ref)
{
   struct Node *Nodes = NULL;
   Nodes = head_ref;
   while(Nodes)
   {
     printf("Nodes->data is %d\n",Nodes->data);
     Nodes = Nodes->next;
   }

}


  

int main()
{
  struct Node *head = NULL;
  int i;
  pthread_mutex_init(&lock,NULL);
  head = create_node();
  pthread_t thread_id1;
  pthread_t thread_id2;
  pthread_create(&thread_id1,NULL,append_list,head);
  pthread_detach(thread_id1);
  pthread_create(&thread_id2,NULL,delete_list,head);
  pthread_detach(thread_id2);
  printlist(head);
  while(1);
  
  
}   
