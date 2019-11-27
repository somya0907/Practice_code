#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char **names;
    int n = 0,i,k,l,m,sort,ret;
    char *min_value = NULL;
    min_value = (char*)malloc(sizeof(char)*10);
    char *swap = NULL;
    swap = (char*)malloc(sizeof(char)*10);
    printf("Enter the number\n");
    scanf("%d",&n);
    names = (char**) malloc (sizeof(char*)*n);
    printf("Enter the names\n");
    for(i = 0 ; i<n ;i++)
    {
        *(names + i) = (char*)malloc(sizeof(char)*10);
        scanf("%s",*(names+i));
//        for(m=0;m<5;m++)
  //      {
      //      printf("Address of name[%d] is %p and char address at %d is %p\n",i,(names+i),m,*(names+i));
    //    }

        
    }
     
    for (k=0;k<n;k++)
    {
         
         strcpy(min_value,*(names+k));
         for (sort = k+1 ;sort < n;sort++)
         {
           ret = strcmp((min_value),*(names+sort));
           if (ret > 0)
           {
                strcpy(swap,min_value);
                strcpy(min_value,*(names+sort));
                strcpy(*(names+sort),swap);
           }
              
         }
         strcpy(*(names+k),min_value);
    }
    for(m=0;m<n;m++)
    {
      printf("sorted string is %s\n",*(names+m));
    }
}
