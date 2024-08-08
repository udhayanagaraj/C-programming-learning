#include<stdio.h>
#include<string.h>

void stringFunc(char str[]){
    printf("Calling using function\n");
    puts(str);
}

void fundamental(){
    //different ways of initializing string

    // char c[] = "abcd";
    // char c[50] = "abcd";
    
    // char c[] = {'a','b','c'};
    // char c[5] = {'a','b','c'};


    //getting user input
    // char name[20];

    // printf("Enter name: ");
    // scanf("%s",name);

    // printf("Your name is %s",name);


    char name[30];
    printf("Enter name: ");
    fgets(name,sizeof(name),stdin);
    // printf("Name: ");
    // puts(name);
    

    stringFunc(name);
}

void stringFunctions(){

    //length of the string
    char a[20] = "Program";

    printf("size of the string %zu",strlen(a));


    //copy the string
    char b[20];
    strcpy(b,a);
    puts(b);

    //concat strings
    char s1[] = "string 1";
    char s2[] = " plus string 2";

    strcat(s1,s2);
    puts(s1);
    puts(s2);

    //compare string
    char c1[] = "udhaya";
    char c2[] = "udhaya";

    int result;
    result = strcmp(c1,c2);
    printf("\n compared %d \n",result);
}

int main(){
    return 0;
}