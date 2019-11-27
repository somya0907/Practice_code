#include<stdio.h>

/*
void fun(int a)
{
  printf("Value is %d",a);
}
int main(void)
{
    fun(10,"somya");
    return 0;
}
*/

int main(void) 
{ 
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(); 
    } 
}
