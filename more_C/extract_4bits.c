#include<stdio.h>
int main(int argc, char*argv[])
{
 
  printf("%s\n",argv[1]); 
  char a = 40;
  char b;
  b = ((1 << 3)-1);
  a =(b & (a >> (2-1)));
  printf("%d\n",b);
  printf("%d\n",a);
}




