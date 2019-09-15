#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
    //char ret[15];
    //uid_t geteuid;
    //ret = geteuid();
    printf("My effective USER ID is %d \n",geteuid());
}
