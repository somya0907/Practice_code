#include<stdio.h>
char* foo()
{
   static char *a = "Hello aunty";
   char *p = a;
   //p = malloc(sizeof(char)*10);
   printf("Address of p is %p and value is %s\n",p,p);
   return a;
}
int main()
{
  char *p = foo();
  printf("Address of p is %p and value is %s\n",p,p);
  char *c = "mmmmmmm";
  p = c;
  foo();
}
