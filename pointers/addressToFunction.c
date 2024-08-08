#include<stdio.h>

int passAddress(int *n1,int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int passFunction(int *ptr){
    (*ptr)++;
}



int main(){
    int num1 = 5, num2 = 10;

    // address of num1 and num2 is passed
    passAddress( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);


    printf("\n passing function");
    int* p,i=10;
    p = &i;

    passFunction(p);
    printf("%d",*p);
    return 0;
}
