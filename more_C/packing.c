#include<stdio.h>
struct __attribute__((__packed__)) mystruct_A {
    char a;
    int b;
    char c;
};
struct new {
    int a;
    char b;
    char c;
};
int main()
{
    struct mystruct_A a;
    struct new  b;
    printf("size of struct is %ld\n",sizeof(a));
    printf("size of struct is %ld\n",sizeof(b));
}
   
