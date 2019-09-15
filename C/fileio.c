#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp;
  char *arr = "My name is somya";
  int ret;
  fp = fopen("somya.txt","w");
  ret = fwrite(arr,1,strlen(arr),fp);
  printf("%d\n",ret);
}
