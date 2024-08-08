#include<stdio.h>

int main(){
    printf("Bitwise And\n");
    int a = 12,b = 25;
    printf("\noutput: %d",a&b);

    printf("\nBitwise OR\n");
    printf("\noutput: %d",a |b);

    printf("\nBitwise XOR\n");
    printf("\noutput: %d",a ^ b);

    printf("\nBitwise complement\n");
    printf("\noutput: %d",~-35);
    printf("\n output: %d",~12);

    printf("\nshift operator\n");
    int num = 212;
    for (int i = 0; i <= 2; i++)
    {
        printf("Right shift by %d: %d\n",i,num >> i);
    }
    printf("\n");

    for (int i = 0; i <=2; i++)
    {
        printf("Left shift by %d: %d\n",i,num << i);
    }
    

    return 0;
    

}