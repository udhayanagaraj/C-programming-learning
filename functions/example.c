#include<stdio.h>
int addNum(int a,int b);  //function prototype
int sumR(int n);

int main(){
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNum(n1, n2);        // function call
    printf("sum = %d",sum);


    printf("\n recursion program \n");
    int result;
    result = sumR(5);
    printf("%d",result);
    return 0;
}

int addNum(int a,int b){
    int result;
    result = a + b;
    return result;
}


int sumR(int n){
    if (n != 0){
        return n + sumR(n -1);
    }
    else
        return n;
    
}