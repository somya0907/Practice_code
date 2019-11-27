#include<stdio.h>
int main(){
  char *ptr = "somya";
  ptr = (char*)malloc(strlen(ptr)+1);
  printf("%d\n",sizeof(*ptr));
}
