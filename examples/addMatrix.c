#include<stdio.h>

int main(){
    int m1[2][3] = {{1,2,3},{1,2,3}};

    int r1[3];


   
    for(int j = 0;j<3;j++){
        r1[j] = m1[0][j] * m1[0][j];
        printf("%d * %d = %d \n",m1[0][j],m1[0][j],m1[0][j] * m1[0][j]);
    }
       

    for (int i = 0; i < 3; i++)
    {
        printf("%d",r1[i]);
        printf("\n");
    }
    
    
}