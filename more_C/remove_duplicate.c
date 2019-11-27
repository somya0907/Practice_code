#include<stdio.h>
#include<string.h>
int remove_duplicate(char str[])
{
   int counter = 0,ch;
   int length = 0,size = 0,value = 0,i;
   char arr[10];
   
   size = strlen(str);
   while ( i < size)
   {
         value = str[i] - 97;
         printf("value is %d\n",value);
         if((counter & (1 << value )) == 0)
         {
           ch = 97 + value;
           arr[length] = ch;
           printf("value of str is %c\n",str[length]);
           counter = counter | (1 << value);
           printf("value of counter is %d\n",counter);
           length++;
         }
         i++;
    }
    printf("%s\n",arr);
}
int main()
{
   char str[] = "geeksforgeeks";
   remove_duplicate(str);
}
   
