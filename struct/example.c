#include<stdio.h>
#include<string.h>


struct Person
{
    char name[50];
    int rollNo;
    float salary;
} person1;


typedef struct Distance
{
    int feet;
    float inch;
} distance;


int main(){
    strcpy(person1.name,"udhaya");
    person1.rollNo = 22207144;
    person1.salary = 800.0;


    printf("Person name: %s\n person rollno: %d\n person salary: %.2f",person1.name,person1.rollNo,person1.salary);


    distance d1;

    d1.feet = 10;
    d1.inch = 12.1;
    printf("\nfeet: %d , inch: %.2f",d1.feet,d1.inch);
}