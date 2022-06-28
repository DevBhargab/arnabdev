#include <stdio.h>

int main()
 {
  int a[] = {12, 42, 55, 57, 59, 95};
  printf("the value of a[0]%d\n", a[0]);
  printf("the value of a[1]%d\n", a[1]);
  printf("the value of a[2]%d\n", a[2]);
  printf("the value of a[3]%d\n", a[3]);

  float b[] = {1.2, 4.2, 5.5, 5.7, 5.9, 9.5};
  printf("the value of a[0]%f\n", b[0]);
  printf("the value of a[1]%f\n", b[1]);
  printf("the value of a[2]%f\n", b[2]);
  printf("the value of a[3]%f\n", b[3]);

  int c[3]  ;
  scanf("%d\n" ,&c[0] );
  // printf("the value of c is %d" , c[0]);
    scanf("%d\n" ,&c[1] );
  // printf("the value of c is %d" , c[1]);
    scanf("%d\n" ,&c[2] );
  printf("the value of c is %d %d %d" , c[0] , c[1],c[2]);

  //   printf("the value of a[6]%d\n" , a[6]);
  /*
    because in c is memory allocation byy pass by value & pass by reference
  */

  return 0;
}