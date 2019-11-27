#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define SIZE 20
struct data{
    char num[10];
    char name[20];
    int key;
};
struct data *new_item;
struct data *hasharray[SIZE];
struct data *dummy;
int i=0;
int hashIndex=0;
int hashcode(int key)
{
   key = key % SIZE;
   i++;
   return key;
}
struct data* search(int key)
{
   hashIndex = key;
   
   while(hasharray[hashIndex] != NULL)
   {
       printf("Address of hasharray[hashIndex] is %p in search\n",hasharray[hashIndex]);
       if(hasharray[hashIndex]->key == key)
       { 
           printf("hello\n");
	   return hasharray[hashIndex];
       }
       hasharray[hashIndex]++;
       hashIndex = hashIndex % SIZE;
      
   }
   return NULL;
}
int insert()
{
    new_item = (struct data*)malloc(sizeof(struct data));
    printf("Enter the contact number\n");
    scanf("%s",new_item->num);
//    new_item->name[strlen(new_item->num +1)] = '\0';
    printf("Enter the name\n");
    scanf("%s",new_item->name);
  //  new_item->name[strlen(new_item->name +1)] = '\0';
    hashIndex = hashcode(i);
    hasharray[hashIndex] = new_item;
    hasharray[hashIndex]->key = hashIndex;
}
int delete(struct data *item)
{
    if(item != NULL){
        int key = 0;
        key = item->key;
        if (hasharray[hashIndex]->key == key){
            printf("Address of hasharray[hashIndex] is %p\n",hasharray[hashIndex]);
            hasharray[hashIndex] = dummy;
            printf("NAME:- %s Contact num is %s and Address is %p\n",hasharray[hashIndex]->name,hasharray[hashIndex]->num,hasharray[hashIndex]);}
    }
   return 0;
}
int display()
{
    for(int p=0;p<3;p++)
    {
        printf("NAME:- %s Contact num is %s\n and addresses are %p",hasharray[p]->name,hasharray[p]->num,hasharray[p]);
    }
}
int main(int argc, char*argv[])
{
    dummy = (struct data*)malloc(sizeof(struct data));
    strcpy(dummy->num,"-1");
    strcpy(dummy->name,"-1");
    dummy->key = -1;
    struct data *item = NULL;
    for(int j=0;j<3;j++)
    {
        insert();
    }
    if(argc > 1)
    {
        int key;
        key = atoi(argv[1]);
        printf("value of key is %d\n",key);
        item = search(key);
        if(item != NULL){
            printf("Name is :- %s \n Contact num is %s\n",item->name,item->num);
            delete(item);}
        else
            printf("Item doesn't exist\n");
    }
   else
   { 
        printf("key is not defined\n");
   }
   display();
}


 


























































   

