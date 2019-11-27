#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
    struct Node *next;
};
int count = 0;
int count_2 = 0;
struct Node* create_node()
{
   struct Node *new_node = NULL;
   new_node = (struct Node*)malloc(sizeof(struct Node));
   new_node->next = NULL;
   return new_node;
}


int enqueue(struct Node *head,struct Node **rear,struct Node **front)
{
   struct Node *temp = NULL;
   struct Node *new_node = NULL;
   temp = head;
   temp->data = 20;
   new_node = create_node();
   if(rear == NULL && front == NULL)
   {
     *front = head;
     temp->next = new_node;
     count = count +1;
     new_node->data = count;
     printf("rear is pointing to %d node\n",count);
     *rear = new_node;
     (*rear)->next = *front;
   }
   else
   {
      while(temp->next != *front)
      {
         temp = temp->next;
      }
      temp->next = new_node;
      count = count +1;
      new_node->data = count;
      *rear = new_node;
      (*rear)->next = *front;
      printf("rear is pointing to %d node\n",count);
  }
}

int dequeue(struct Node *head_ref,struct Node **rear, struct Node **front)
{
  if(rear == front)
  {
      
      printf("Queue is underflow\n");
  }
  else
  {
      struct Node *temp = NULL;
      *front = head_ref;
      temp = (*front)->next;
      *front = temp->next;
      head_ref->next = *front;
      free(temp);
   }
      
          

       
   
   return 0;
}

int display(struct Node *head_ref,struct Node *rear,struct Node *front)
{
     struct Node *head = NULL;
     struct Node *temp = NULL;    
     temp = head_ref;
//     temp = temp->next;
     while(temp->next)
     {
        printf("Value in Nodes are %d\n",temp->data);
  
        temp = temp->next;
     }
    
}
int main()
{
   struct Node *rear = NULL;
   struct Node *front = NULL;
   struct Node *head = NULL;
   head = create_node();
   int ch = 0;
   while(1)
   {
     printf("enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
             enqueue(head,&rear,&front);
             break;
       case 2:
              dequeue(head,&rear,&front);
              break;
       case 3:
              display(head,rear,front);
              break;
       default:
               printf("you entered a wrong choice\n");
               break;
      }
   }

}
