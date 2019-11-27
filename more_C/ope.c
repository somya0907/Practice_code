#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;

fp = fopen("somya.txt","w");
if(fp != NULL)
{ 
   printf("created file");
}
else
{

   printf("ok bbiee");
}
}
