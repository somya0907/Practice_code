#include<stdio.h>
#include<string.h>
/*int cast()
{
   int arr[15] = {1,2,3,4,5};
   char *ptr;
   ptr = arr;
   printf("%d\n",ptr[7]);
}*/
/*int doub()
{
  char *cities[] = {"Delhi", "London", "Sydney"};
  int **i = cities[0];
  printf("%c\n", **i);
}*/

int main()
{
	/*const int a = 5;
	int *ptr;
	ptr = &a;
	*ptr = 10;
	printf("%d\n", a);
	printf("%d", sizeof(void));
        char *ptrr = "Pointer in c";//char arr[15];
        //arr[15] = *ptrr;
//        printf("value of ptrr1 is %c\n",*ptrr);
//	char arr[15] = "hello aunty";
        char arr[] = {*ptrr};
	printf(" Value of ptrr is %c\n",arr[0]);*/
        //int *ptr = "hello";
	//char a[22];
//        strcpy(ptr,"world");
        //*ptr = 9;
//	printf("\n%d",*ptr);
       // cast();
       // doub();
        int a, b, c;
	char *p = 0;
	int *q = 0;
	double *r = 0;
	a = (int)(p + 1);
	b = (int)(q + 1);
	c = (int)(r + 1);
	printf("%d %d  %d",a, b, c);
	return 0;
}
