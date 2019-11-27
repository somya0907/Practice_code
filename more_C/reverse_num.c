#include<stdio.h>
int main()
{
  char temp = 0;
  int i;
  int n = 1073774590;
  int bits = sizeof(n)*8;
  int reverse_bits;
  for (i = 0; i < bits; i++) 
    { 
        temp = (n & (1 << i)); 
        if(temp) 
            reverse_bits|= (1 << ((bits - 1) - i)); 
    } 
   
    printf("%d %d\n",reverse_bits,i);
}
