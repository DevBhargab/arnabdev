
/*
    change the parameter in function but don't change the values of in calling the function

    beacuse a copy of argument is passed to the function
*/
#include<stdio.h>

    void pricecalculator(float value);
    int main(){
    float value = 100.0;
    pricecalculator(value);
    return 0;                       
}
    void pricecalculator(float value){

        value = value + (0.18 * value);
        printf("the value of products is %f\n" , value);
    }
    