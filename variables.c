#include<stdio.h>


int main(){
    //variables
    int a = 25;
    char ch = 'a';
    ch = 'l';

    //Constants
    const double pi = 3.14;


    //integer
    int id,age;
    printf("Id = %d, age = %d:",id,age);

    //character
    printf("\n");
    printf("Character example");
    printf("\n");
    printf("char : %c",ch);

    //float
    printf("\n");
    float fo =  22.442e2;
    printf("float number: %f",fo);

    //double 
    printf("\n");
    double db = 3.14159;
    printf("double number: %lf",db);

    //long
    printf("\n");
    long int b;
    printf("the long number: %ld",sizeof(b));

    //long long
    printf("\n");
    long long int lb;
    printf("the long long number: %lld",lb);

    //unsigned long int
    printf("\n");
    long int lu = 235345L;
    printf("the unsigned long number: %lu",lu);

    //unsigned ling long int 
    printf("\n");
    long long int lllu = 426546246;
    printf("the unsigned long long number: %llu",lllu);


    //long double
    printf("\n");
    long double lblb = 3.1415912374123;
    printf("the unsgined long double: %Lf",lblb);

    return 0;

}