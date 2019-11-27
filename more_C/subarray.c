#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,-5,-1,-6,4,-1,20,5,12,-9,11,12};
    int new_sum[4]; 
    int sum = 0,j=0,i,k,max_value=0,position=0,seek,sub_array = 0,negative_val=0,array_size=0;
    //Calculating the size of array
    array_size = sizeof(arr)/4;
    
   //sum of subarray is stored in a new array i.e new_sum 
    for (i=0;i<array_size;i++)
    {
       if (i == (array_size -1))
          new_sum[j] = sum+arr[i];
       
       if (arr[i] < 0 && arr[i+1] > 0) {
          new_sum[j] = sum;
          sum = 0;
              j++;
              continue;
        }
       sum = sum+arr[i];

        
    }
    printf("value of j is %d\n",j); 
  //Calculting the max value from sum of subarray 
    max_value = new_sum[0];
    for(k=0;k<=j;k++)
    {
      if(max_value < new_sum[k])
      {
         printf("hello\n");
         max_value = new_sum[k];
         //Position tells number of swaps been done to get the max value
         position = k;

      }
      
      
      

    }
     printf("postion is %d\n",position);
     printf("max_value is %d\n",max_value);
     for(seek=0;seek<=array_size;seek++)
     {
          if(arr[seek] < 0 || seek == array_size)
          { //negative_val is incremented everytime we get the negative integer in an array
           if (negative_val == position)
           {
              for(sub_array=seek-1;sub_array >=0;sub_array--)
                 { 
                    if (arr[sub_array]<0)
                       break;
                   printf("sub array of max value is %d\n",arr[sub_array]);
                  }
           }
           //if aar[i+1] is negative no increement in negative_val 
           if(arr[seek+1] < 0)
           {
              continue;
           }
           negative_val = negative_val +1;
        }

}
      
           
    
        
  

}
