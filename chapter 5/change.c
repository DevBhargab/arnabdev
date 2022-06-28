#include <stdio.h>

void change(int a);
void arnab();
int main()
{
  int b = 344;
  printf("the value is %d\n", b);
  change(b);
  printf("the value is before change  is %d\n", b);

  int a;
  printf("enter value of a\n");   // Arguments call;
  scanf("%d", &a);
  arnab(a);

  return 0;
}

void change(int a)
{
  a = 77;
}

void arnab(int a)
{                                   // Parameter call;
  for (int i = 0; i <= 10; i++)
  {
    /* code */
    printf("%d\n", i * a);
  }
}