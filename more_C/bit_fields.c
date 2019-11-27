#include<stdio.h>

/*struct test {
unsigned int x;
unsigned int z;
unsigned long y : 33;
};*/
struct test2 {
unsigned int x:2;
 int y:2;
unsigned int z:2;
};
union test3{
unsigned int p:3;
unsigned int q:3;
int r;
};
struct test4{
char a;
int b;
char c;
long d;
};
int main()
{
  union test3 t3;
  struct test2 t2;
  struct test4 t4;
  printf(" size of test2 is %ld and test4 is %ld\n", sizeof(struct test2),sizeof(struct test4));
  t2.x = 5;
  printf("value of x is %d\n",t2.x);
  t3.p = 4;
  t3.q = 5;
  t3.r = 1;
  printf("%ld\n", sizeof(t3));
  printf("t3.p = %d, t3.q = %d, t3.r = %d\n",
  t3.p, t3.q, t3.r);

  return 0;
} 
