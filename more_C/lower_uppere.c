#include<stdio.h>
#include<string.h>
int main()
{
   char c[20] = "HeLlO AUNTY";
   int size = strlen(c);
   printf("value of size is %d\n",size);
   for(int i=0;i<size;i++)
   {
        //if(c[i] == " ");
          //  continue;
        c[i] = c[i] | (1<<5);
        printf("value of a[i] is %c\n",c[i]);
   }
}
   
