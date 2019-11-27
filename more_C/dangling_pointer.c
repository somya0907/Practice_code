#include<stdio.h>
#include<stdlib.h>
int f1()
{
   static int x = 5;
   printf("value of x is %p\n",&x);
   return x;
}
int main()
{
    int ptr = f1();
    int *str = malloc(sizeof(int)*5);
    *str = 5;
    printf("Value of str before free is %p\n",str);
    printf("Value of str before free is %d\n",*str);
    free(str);
    printf("Value of str is %p\n",str);
    printf("Value of str is %d\n",*str);
    str=NULL;
    printf("Value of str is %p\n",str);
//    printf("Value of str is %d\n",*str);
    if(str == NULL)
        printf("hello");
//    printf("%d\n",*str);    
}
