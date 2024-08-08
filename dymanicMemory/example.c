#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,i,*prt,sum=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    prt = (int*)malloc(n * sizeof(int));

    if(prt == NULL){
        printf("Error !memory cannot be allocated");
        exit(0);
    }

    printf("enter the element:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",prt + i);
        sum += *(prt + i);
    }

    printf("Sum = %d", sum);
  
    // deallocating the memory
    free(prt);

    return 0;
    
}