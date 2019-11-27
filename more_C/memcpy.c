#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr = "somya";
    char *p = "hello";
    printf("%ld\n",sizeof(ptr));
    memcpy(p,ptr,sizeof(ptr));
}
