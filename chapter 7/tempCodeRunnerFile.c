
#include<stdio.h>
int main(){
  int a , b , c ;
  a = 4;
  c = a;
  a = b;
  b =c;
  
  printf("the value of c is %d\n " , c);
  return 0;
}