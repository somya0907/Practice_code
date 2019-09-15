#include<stdio.h>

void func(int a)
{
    printf("value of x is %d\n",a);

}    
int main()
{
    void (*func_ptr) (int) = &func;
    (*func_ptr)(10);
}

    

