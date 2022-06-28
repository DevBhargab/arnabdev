#include <stdio.h>

void fun(void)
{
    auto int a=10;
    static int b=20;
    
    printf("a = %d, b = %d\n",a,b);
    
    a++;
    b++;
}

int main()
{
    int loop;
    
    //calling function 10 times
    for(loop=0; loop<5; loop++)
        fun();
	
	return 0;
}
