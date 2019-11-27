#include<stdio.h>
#include<string.h>
void rev_string(char *arr1, char *arr2,int i,int len)
{
  arr1[0] = arr1[0]^arr2[0];
  arr2[0] = arr1[0] ^ arr2[0];
  arr1[0] = arr2[0] ^ arr1[0];
}
  
void find_char(char *arr)
{
  int len = strlen(arr);
  len = len-1;
  printf("%d\n",len);
  int i ;
  for(i=0;i<=len/2;i++)
  {
    rev_string(&arr[i],&arr[len],i,len);
    len--;
  }
    
}
  
int main()
{
  char arr[] = "vishwajeet";
  find_char(arr);
  printf("value of arr is %s\n",arr);
} 
