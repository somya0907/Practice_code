#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int arr[], int n) 
{ 
    int i,k;
    int temp = 0;
    int *a = NULL;
    a = (int*)malloc(sizeof(int)*100);
    // Base case 
    if (n == 1 ) 
        return 0; 
  
    // One pass of bubble sort. After 
    // this pass, the largest element 
    // is moved (or bubbled) to end. 
    for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
        {
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
  
    // Largest element is fixed, 
    // recur for remaining array 
    bubble_sort(arr, n-1);
    printf("Value of n is %d\n",n);
    printf("value of b is %d\n",p);
    for(k=0;k<7;k++)
       printf("value of arr after ebery return is %d\n",a[k]);
} 
  
/* Function to print an array */
void printArray(int arr[], int n) 
{ 
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]);
//    printf("value of n is %d\n",n); 
    bubble_sort(arr, n); 
    printf("Sorted array : \n"); 
    printArray(arr, n); 
    return 0;
}
