#include<stdio.h>

int main()
{
    char **strPtr;
    {
        char *str = "Hello!";
        strPtr = &str;
        printf("%s and addres is %p \n", *strPtr,strPtr);
//        free(str);

    }
    // str falls out of scope 
    // strPtr is now a dangling pointer 
   printf("%s and addres is %p \n", str,strPtr);
}
