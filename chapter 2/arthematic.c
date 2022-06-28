#include<stdio.h>
#include<math.h>

int main(){
    int a = 2;                          //very important pow 2^5
    int b = 5;
    int k = 3.0/9;                      //3.0/9 float concept 
    printf("the value of 3.0/9 is %f\n", 3.0/9);
    printf("the value of is a+b is %d.\n",a+b);
    printf("the value 2 to the power 5 is %f\n",pow(2,5));
    return 0;
}


/* if you divide 5/2 = 2 
 but if you divide 5.0/2 = 2.5

  if you store a = 3.5 {but 3.5 is a float and convert to int like 3}
  
  if you store float = 8 { internally convert into 8.0}
  
  for type conversion 
  int & int = int
  int & float = float
  float & float = float
  

  *** if you see the value of 3.0/9 = 0.33 (float case)
                                        {but int case = 0}
  
  
  
  */

 
