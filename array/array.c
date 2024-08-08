#include<stdio.h>

void arraySum(int num[],int length){
    int sum;
    
    for (int i=0;i<length;i++){
        sum += num[i];
    }

    printf("%d",sum);
}

int main(){
    int values[5];;


    for(int i=0;i<5;i++){
        values[i] = i+1;
    }
    int length = sizeof(values) / sizeof(values[0]);
    for (int i = 0; i < length ; i++)
    {
        printf("%d\n",values[i]);
    }
    

    //pass array to a function
    int result;
    int num[5] = {1,2,3,4,5};
    int l = sizeof(num) / sizeof(num[0]);

    arraySum(num,l);
   
}

