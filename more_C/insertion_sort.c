#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k=0,min_element=0,i=0,j,temp=0;
    int* A = NULL;
    A = (int*)malloc(sizeof(int)*5);
    printf("Enter the numbers \n");
    for(i=0; i<5; i++)
        scanf("%d",(A+i));
    for( int i = 0 ;i < 5 ; i++ ) {
    /*storing current element whose left side is checked for its 
             correct position .*/

      int temp = A[ i ];    
      int j = i;

       /* check whether the adjacent element in left side is greater or
            less than the current element. */

          while(  j > 0  && temp < A[ j -1]) {

           // moving the left side element to one position forward.
                A[ j ] = A[ j-1];   
                printf("A[j] is %d\n", A[j]);
                j= j - 1;

           }
         // moving current element to its  correct position.
           A[ j ] = temp;       
     }  
    for(i=0; i<5; i++)
	printf("sorted values are %d\n",A[i]);

	    
        
      
  
}
  
