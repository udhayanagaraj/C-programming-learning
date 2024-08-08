#include <stdio.h>
#include <stdlib.h>


struct person
{
    int age;
    float weight;
};

struct Person
{
    int age;
    float weight;
    char name[30];
};

void nPerson()
{
    struct Person *ptr;
    int i, n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    // allocating memory for n numbers of struct person
    ptr = (struct Person *)malloc(n * sizeof(struct Person));

    for (i = 0; i < n; ++i)
    {
        printf("Enter first name and age respectively: ");

        // To access members of 1st struct person,
        // ptr->name and ptr->age is used

        // To access members of 2nd struct person,
        // (ptr+1)->name and (ptr+1)->age is used
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < n; ++i)
        printf("Name: %s\tAge: %d\n", (ptr + i)->name, (ptr + i)->age);
}

void example(){
    struct person *personPtr, person1;

    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);
}

//passing struct to function
void passingStruct(struct person p)
{
    printf("Person age: ",p.age);
    printf("person weight: ",p.weight);
}


int main()
{   
    nPerson();
    return 0;
}
