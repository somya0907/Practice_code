#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char*** check_proto()
{
  char *arr = "somya,chawla,hello,how,are,you,how,many,are,mad";
  char *token = NULL;
  char *new_string = NULL;
  int i =0;
  printf("%d\n",strlen(arr));
  new_string = malloc(sizeof(char)*strlen(arr)+1);
  printf("address of newstrig is %p\n",new_string);
  strcpy(new_string,arr);
  printf("value of new is %s\n",new_string);
  char **str = (char**)malloc(sizeof(char*)*30);
  
  
  while((token = strsep(&new_string,","))!=NULL)
  {
    printf("%s\n",token);
    *(str+i) = malloc(sizeof(char)*strlen(token)+1);
    strcpy(*(str+i),token);
    i++;
     
  }
    //printf("address of newstrig is %p\n",new_string);
 
    for(int j=0;j<i;j++)
    { 
      printf("%s\n",*(str+j));
    }

    return &str; 
}   

int main()
{
  char ***somya = NULL;
  somya = check_proto();
  for(int i=0;i<10;i++)
  {
     printf("new is %s\n",**(somya+i));
  }
}
