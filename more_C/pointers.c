#include<stdio.h>
int main()
{
 int a[] = {10,20,30,40};
 int *p = a;
 int i =0;
 printf("%d\n",*++p);
 printf("%d\n",(++*p));
 printf("%d\n",*(++p));
 printf("%d\n",++(*p));
 printf("%d %d %d %d\n",++i,i++,++i,i++);
 for(i=0;i<4;i++)
 {
     printf("%d\n",*((char*)(a+i)));
 }
    


}
