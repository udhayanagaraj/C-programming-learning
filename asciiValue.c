#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("you entered: %c.\n",ch);

    printf("Ascii value of %c is %d",ch,ch);
    return 0;
}