#include<stdio.h>

    float squareArea(float side);
    float squareSide(float rad);
    float recatangleArea(float a , float b);
    int main(){
    float a = 5.04;
    float b = 4.54;
    float side = 545.55;
    float rad = 54.545;
    squareArea(side);
    squareSide(rad);
    printf("the square arae is %f\n" ,squareArea(side));
    printf("THE AREA IS %f \n",squareSide(rad));


    printf("the area is : %f\n" , recatangleArea(a , b));
    return 0;
}
float squareArea(float side){
    return side * side;

}
    float squareSide(float rad){
            return 3.14 * rad * rad;
    }

    float recatangleArea(float a , float b){
            return a * b ;
    }

