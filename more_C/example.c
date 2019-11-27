#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *optarg = "hello,aunty,mummy";
  char **str = NULL;
  int i = 0,k=0,p=0;
  char arr[20];
  str = (char**)malloc(sizeof(char*));
  int size = sizeof(*optarg);
  int size2 = sizeof(optarg3);
  printf("sizeis %d %d\n",size2,size);
  /*for(i=0;i<3;i++)
  {
    *(str+i) = (char*)malloc(sizeof(char)*6);*/
     for(int j=k;optarg[j]!='\0';j++)
     {
         if(optarg[j] == ',')
          {
              *(str+i) = (char*)malloc(sizeof(char)*10);
              strcpy(*(str+i),arr);
              size = strlen((*str+i)+1) = '\0';
              printf("%d",size);
              k=p+1;
              printf("value of k is %d\n",k);
              p = 0;
          }
          arr[p] = optarg[j];
          printf("%c\n",optarg[j]);
          p++; 
    }
    
  }
  for(i=0;i<3;i++)
  {
     printf("%s\n",*(str+i));
  }
}
  
