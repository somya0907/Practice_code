#include"header.h"
int i =0;

struct Queue* create_node()
{
   struct Queue *new_node = NULL;
   new_node = (struct Queue*)malloc(sizeof(struct Queue));
   new_node->next = NULL;
   return new_node;
}
int enqueue()
{
    //printf("adress is %p and %p\n",*head);
    struct Queue *temp = NULL;
    struct Queue *traverse = NULL;
    temp = front;
    traverse = front;
    while(temp->next)
    {
      temp = temp->next;
    }
    
    temp->next = create_node();
    printf("Enter the string\n");
    temp->data = (char*)malloc(sizeof(char)*10);
    scanf("%s",temp->data);
    rear = temp;
    printf("data rear poing is %s\n",rear->data);
    
    while(traverse->next)
    {
        traverse = traverse->next;
        printf("value is %s\n",traverse->data);
    }
           
}
char* dequeue(char value[])
{
       if(rear == front){
           printf("Queue is empty\n");
           return NULL;}
       struct Queue *new_head = NULL;
       struct Queue *head = NULL;
       new_head =front->next;
       strcpy(value,front->data);
       front = new_head;
       free(head);
       head=NULL;
       return value;
}
       
       
int main()
{
   
   struct Queue *queue_head = NULL;
   char ret[10];
   queue_head = create_node();
   printf("address is %p\n",queue_head);
   rear = queue_head;
   front = queue_head;
   for(i-0;i<5;i++){
       enqueue();
   }
   dequeue(ret);
   printf("deleted  is %s\n",ret);
  
}
      
   
 
