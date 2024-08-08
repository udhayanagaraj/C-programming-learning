#include<stdio.h>


int main(){
    char operation;
    int n1,n2;

    printf("Enter an operation (+,-,*,/): ");
    scanf("%c",&operation);
    printf("Enter two operands: ");
    scanf("%d %d",&n1,&n2);

    switch (operation)
    {
    case '+':
        printf("%d + %d: = %d",n1,n2,n1 + n2);
        break;
    case '-':
        printf("%d - %d: = %d",n1,n2,n1 - n2);
        break;
    case '*':
        printf("%d * %d: = %d",n1,n2,n1 * n2);
        break;
    case '/':
        printf("%d / %d: = %d",n1,n2,n1 / n2);
        break;
    default:
        break;
    }

    return 0;
}