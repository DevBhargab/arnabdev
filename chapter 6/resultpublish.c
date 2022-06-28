#include <stdio.h>
int result(int san, int math, int physics);
int yourResult(int san, int math, int physics);

int main()
{
    int ans = result(50, 25, 45);
    printf("the ans is %d\n", ans);
    int san = 84;

    int math = 50; 
    int physics = 82;

    printf("your parcentage is : %d" , yourResult(san , math , physics));
    return 0;
}
int result(int san, int math, int physics)
{
    int s;
    printf("enter the marks of sanskrit\n");
    scanf("%d", &s);

    int m;
    printf("enter the marks of math\n");
    scanf("%d", &m);

    int p;
    printf("enter the marks of physics\n");
    scanf("%d", &p);

    int sum = (m + p + s) / 3;
    return sum;

    
}

int yourResult(int san, int math, int physics){
    return((math + san + physics) /3);
}