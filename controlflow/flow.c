#include<stdio.h>

int main(){
    //if statement
    int num;

    printf("enter the number: ");
    scanf("%d",&num);
    if(num > 2){
        printf("Greater");
        printf("\n");
    }
    else if (num == 10){
        printf("equal");
        printf("\n");
    }
    else{
        printf("lower");
        printf("\n");
    }


    //forloop

    int i;
    for(i=0;i<10;i++){
        printf("%d",i);
    }

    printf("\n");

    //while loop

    int j = 1;

    while(j <= 5){
        printf("%d",j);
        j++;
    }

    printf("\n");
    //do while
    int k = 5;
    do{
        printf("%d",k);
        k--;
    }while (k != 0);
    printf("\n");


    return 0;
    

}