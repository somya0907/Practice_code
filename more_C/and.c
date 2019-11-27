#include <stdio.h>

void main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y && z++;
    printf("%d", y);
    int i = 0, j = 0;
    if (i || (j = i + 10)){
            //do something
       printf("okk\n");
             ;}
    else
        printf("hello\n");

}
