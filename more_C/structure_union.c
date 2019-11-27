#include<stdio.h>
#include<string.h>
union test
{
  int b;
  char c;
  double d;
};
struct hello
{
   int b;
   char c;
   double d;
};
int main()
{
  union test f;
  struct hello e;
  printf("%ld\n",sizeof(f));
  f.b = 8;
  f.c = 'c';
  printf(" value is %d %d\n",f.b,f.c);
  printf("%ld\n",sizeof(struct hello));
  e.b = 30;
  e.c ='d';
  printf("value is %d %c\n",e.b,e.c);
}
   
  
