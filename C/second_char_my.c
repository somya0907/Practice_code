#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NO_OF_CHARS 15
int second_char(char *new_str)
{
   int *ccount = NULL;
   int count = 0;
   char traverse;
   ccount = (int*)malloc(sizeof(int)*NO_OF_CHARS);
   int i =0,length = 0,k=0,j=0;
   length = strlen(new_str);
   for(i=0;i<length;i++)
   {
       traverse = new_str[i];
       ccount[i] = k;
       for(j=i-1;j>=0;j--)
       {
           if ((traverse == new_str[j]) && (i !=0))
           {
              ccount[i] = ccount[i]+1;
           }
       }
   }
   int first = 0,second = 0;
   for(i=0;i<length;i++)
   {
       if(ccount[i] > ccount[first])
       {
         if(new_str[i] != new_str[first])
         {
           printf("value of count is %d\n",ccount[i]);
           second = first;
           first = i; 
         }
         else
         {
           first = i;
         }
       }
       else if(ccount[i] > ccount[second] && new_str[i] != new_str[first])
       {
                printf("value of i is %c\n",new_str[i]);
                second = i;
       }
          
   }
   second = new_str[first];
   return second;       
}


int main()
{ 
  char *str = "abcd";
  char second;
  second = second_char(str);
  printf("value of second is %c\n",second);
  

}
