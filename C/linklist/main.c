#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};


//creation of new node
struct Node* create_new_node()
{
   struct Node *new_node = NULL;
   new_node = (struct Node*)malloc(sizeof(struct Node*));
   return new_node;
}
struct Node* interjection_node(struct Node **head_ref,struct Node **head_ref_1)
{
   struct Node *list1 = NULL;
   list1 = *head_ref;
   struct Node *list2 = NULL;
   list2 = *head_ref_1;
   struct Node *result = NULL;
   while(list1 != NULL)
   {
       
        list2 = *head_ref_1; 
        while(list2 !=NULL)
        {
        if(list1->data == list2->data)
        {
            printf("list1->data is %d list2->data is %d\n",list1->data,list2->data);
            push_node(&result,list2->data);
        }
            list2 = list2->next;
        }
        list1 = list1->next;
   }
   return result;
}

int push_node(struct Node **head_ref,int data)
{
    struct Node *traverse = NULL;
    traverse = *head_ref;
    struct Node *new_node = NULL;
    new_node = create_new_node();
    if (*head_ref == NULL)
    {
        printf("hello\n");
        *head_ref = new_node;
        new_node->next = NULL; 
        new_node->data = data;
        //return 0 ;
     }
    else
    {
      printf("hello aunty\n");
      while(traverse->next)
      {
        traverse = traverse->next;
      }
      traverse->next = new_node;
      new_node->next = NULL;
      new_node->data = data;
    }



}
   
  
void reverse_linked_list(struct Node **head_ref)
{
    struct Node *new=NULL,*prev = NULL ,*current,*temp;
    current = *head_ref;
    while(current)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
     }
        *head_ref = prev;
}  
               
void deletion_after_specific_key(struct Node **head_ref,int data)
{
    struct Node *delete_node = NULL,*prev,*temp,*traverse;
    delete_node = *head_ref;
    struct Node *head = NULL;
    while(delete_node != NULL && delete_node->data == 11)
    {
         temp =  delete_node->next;
         *head_ref = temp;
         free(delete_node);
         return;
    }
    while(delete_node)
    {
       prev = delete_node;
       head = delete_node->next;
       if(head->data == 8)
       {
          printf("hello\n");
          temp = head->next;
          free(head);
          prev->next = temp;
          break;
          
          

       }
      delete_node = delete_node->next;
     }
    traverse = *head_ref;
    while(traverse)
    {
       prev = traverse;
       head = traverse->next;
       if(head->data == 6)
       {
          printf("hello\n");
          temp = head->next;
          free(head);
          prev->next = temp;
          break;

       }
       traverse = traverse->next;
     } 
        
}

void delete_alternate_node(struct Node *head_ref)
{
    struct Node *prev = head_ref;
    struct Node *temp = NULL;
    temp = prev->next;
    
    while(prev != NULL && temp != NULL)
    {
        prev->next = temp->next;
        free(temp);
        prev = prev->next;
        if(prev!=NULL)
           temp =prev->next;

    }
}
        
void swap_two_node(struct Node **head_ref)
{
    struct Node *traversex = *head_ref;
    struct Node *traversey = *head_ref; 
    struct Node *tempx = NULL,*prevx,*prevy,*tempy;
    int i =0,k=0;
    while(traversex)
    {
        if(traversex->data == 7)
        {
           tempx = traversex->next;
           break;
        }
        i=i+1;
        prevx = traversex;
        traversex = traversex->next;

       // traversex = traversex->next;
    
    }
    printf("%d\n",i);
    
    
    while(traversey)
    {
        if(traversey->data == 8)
        {
            tempy = traversey->next;
            break;
        }
        k=k+1;
        prevy = traversey;
        traversey = traversey->next;

   }
    if(i==0)
    {
        *head_ref = traversey;
         traversey->next = tempx;
    }
    else
    {
         prevx->next = traversey;
         traversey->next = tempx;
    }

    if(k==0)
    {
        *head_ref = traversex;
         traversex->next = tempy;
    }
    else
    {
        prevy->next = traversex;
        traversex->next = tempy;
    }

         
}
   

         
// inserting node the front
void append_from_front(struct Node **head_ref, int data)
{
    printf("in function\n");
    struct Node *New_node = NULL;
    struct Node *front = *head_ref;
    New_node =  create_new_node();
 
    New_node->data = data;
    if( *head_ref == NULL)
    {
        *head_ref = New_node;
         New_node->next = NULL;
         return;
    }
    New_node->next = *head_ref;
    *head_ref = New_node;
}
    
    
void printlist(struct Node *head)
{
   printf("Last linked list is\n");
   while(head)
   {
       printf("data for the node is %d\n",head->data);
       head = head->next;
   }
}

void add_node_from_last(struct Node **head_ref,int data)
{
   struct Node *new_node = create_new_node();
   struct Node *last = NULL;
   last = *head_ref;
   new_node->data = data;
   while(last->next)
   {
      last =  last->next;
   }
   last->next = new_node;
   new_node->next = NULL;
}
void add_node_after_specific_node(struct Node **head_ref,int data)
{
   struct Node *new_node = create_new_node();
   struct Node *spec_node = NULL; 
   struct Node *next_node = NULL;
   struct Node *prev = NULL;
    
   spec_node = *head_ref;
   while(spec_node)
   {
     prev = spec_node;
     
     if (spec_node->data == 6)
     {
         next_node = spec_node->next;
         new_node->data = data;
         spec_node->next = new_node;
    
         new_node->next = next_node;
     }
     spec_node = spec_node->next;
   }
}
         
      

int main()
{
  int i = 0;
  struct Node *head = NULL;
  struct Node *head_2 = NULL;
  struct Node *result = NULL;
  printf("Enter the action\n");
  scanf("%d",&i);
  switch(i)
  {
    case 1:
          printf("Entering Node from front\n");
          append_from_front(&head,15);
          append_from_front(&head,10);
          add_node_from_last(&head,4);
          add_node_from_last(&head,20);
          //add_node_after_specific_node(&head,8);
          printlist(head);
          append_from_front(&head_2,4);
          append_from_front(&head_2,8);
          add_node_from_last(&head_2,2);
          add_node_from_last(&head_2,10);
          //deletion_after_specific_key(&head,9);
 //         delete_alternate_node(head);
          //swap_two_node(&head);
          //reverse_linked_list(&head);
          printlist(head_2);
          result = interjection_node(&head,&head_2);
          printlist(result);
          
          break;
    case 2:  
          printf("Entering Node from last\n");
          break;
    default:
           printf("you chose wrong input\n");
           break;
          
  }
  
  return 0;
} 
  
