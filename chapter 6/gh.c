#include <stdio.h>
// When a function calls itself, it's called recursion
int sum(int n);
int main()
{
    printf("sum is : %d \n", sum(4));
    return 0;
}
int sum(int n)
{
        if (n ==0)
        {
            /* code */      // base case : without this terminal always show Segmentation fault (core dump)
            return 1;
        }
        int fact = sum (n-1);
        int facn = fact * n;
        
    // int sum1 = sum(n - 1); // sum of 1 to n
    // int sum2 = sum1 + n;
    // return sum2;
    return facn;    

}

/*
    Properties of Recursion :
    
a. Anything that can be done with Iteration, can be done with
recursion and vice-versa.

b. Recursion can sometimes give the most simple solution.

d. Iteration has infinite loop & Recursion has stack overflow

stackoverflow means that your system memory is full & system crash due to the abscence of the base case which is  enough to crash your system
*/