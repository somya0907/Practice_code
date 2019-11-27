#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "His";
	int i;
	for(i = 0; i < strlen(str); i++)
        {
         printf("%d\n",strlen(str));
	 printf("%s\n", str++);
        }
        //char *ptr = "void pointer";
        int *ptr = 5;
        void *vptr;
        vptr = &ptr;
//        printf("value of ptr is %d\n",ptr);
 //       printf("value of ptr is %d\n",vptr);
        printf("%d" ,****(int ****)vptr);
	return 0;
}
