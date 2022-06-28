#include <stdio.h>

float converTemp(float celecious);
float test(float body);
int main()
{

    float far = converTemp(37);
    printf("the body temp is : %f\n", far);

    return 0;
}
float converTemp(float celecious)
{
    float faren = celecious * (9.0/ 5.0) + 32;
    return faren;
}
