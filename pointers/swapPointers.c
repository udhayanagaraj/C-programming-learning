#include<stdio.h>

void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main(){
    int num1 = 5,num2 = 10;

    swap(&num1,&num2);

    printf("num1= %d\n",num1);
    printf("num2 = %d\n",num2);
}