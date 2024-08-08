#include<stdio.h>

int main(){
    //c input

    int test;
    printf("Enter an integer:");
    scanf("%d",&test);
    printf("entered number is: %d",test);

    float num1;
    double num2;

    printf("Enter number for float: ");
    scanf("%f",&num1);

    printf("Enter number for double: ");
    scanf("%lf",&num2);

    printf("float number: %f and double number: %lf ",num1,num2);

    return 0;
}