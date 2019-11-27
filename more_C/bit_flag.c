#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define shift(times,number)(number & (1<<times))
int main(int argc,char *argv[])
{
  char *check = (char*)malloc(sizeof(char));
  short num = 0;int ret = 0,ret2;
  for(int i=0;i<argc;i++)
  {
    check = argv[i];
    printf("value of check is %s and strlen is %d and address of string is %p\n",check,strlen(check),check);
    if(strcmp(argv[i],"bssid")==0)
    {
       num = num|1<<0; 
       printf("%d\n",num);
    }
    else if(strcmp(argv[i],"mac")==0)
    {
       num = num |1<<1;
    }
                   
 }

    ret = shift(0,num);
    ret2 = shift(1,num);
    if(ret && ret2)
    {
        printf("%d %dbit is set\n",ret,ret2);
    }
 
}
