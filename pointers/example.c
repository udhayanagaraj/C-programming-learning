#include<stdio.h>

void change(){
    int*pc ,c;
    c = 5;
    pc = &c;
    c = 1;
    printf("\n%d",c);
    printf("\n%d",*pc);

    *pc = 2;    
    printf("\n%d",c);
    printf("\n%d",*pc);
}


int main(){

    //decalaring pointer

    int* p;
    int *p1;
    int * p2;
    int* a1, a2;
    a2 = 5;
    a1 = &a2;
    printf("%d",*a1);

    change();




}