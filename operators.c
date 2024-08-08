#include<stdio.h>

int main(){

    //Arithmetic operator
    printf("Arithmetic operator part \n");
    int a = 9,b = 4,c;

    c = a + b;
    printf("a + b = %d \n",c);
    c = a - b;
    printf("a - b = %d \n",c);
    c = a * b;
    printf("a * b = %d \n",c);
    c = a / b;
    printf("a / b = %d \n",c);
    c = a % b;
    printf("reminder when a divided by b = %d \n",c);

    //increament and decreament operator
    printf("this is increament and decreament part\n");
    int aa = 10, bb = 100;
    float cc = 10.5, dd = 100.5;

    printf("++a = %d \n",++aa);
    printf("--b = %d \n",--bb);
    printf("++c = %f \n",++cc);
    printf("--d = %f \n",--dd);
    printf("a++ = %d \n",aa++);

    printf("Artithmetic operator part");
    int v = 5,dummy;

    dummy = v;
    printf("c = %d\n",dummy);
    dummy += v;
    printf("c += %d\n",dummy);
    dummy -= a;     
    printf("c = %d\n", dummy);
    dummy *= a;     
    printf("c = %d\n", dummy);
    dummy /= a;     
    printf("c = %d\n", dummy);
    dummy %= a;     
    printf("c = %d\n", dummy);
    

    //logical operators
    printf("\n logical operator part \n");
    int result;
    result = (10 == 10) && (10 > 2);
    printf("Result: %d",result);

    result = (10 == 10) || (2 > 10);
    printf("Result: %d",result);

    result = !(10 != 10);
    printf("Result: %d",result);

    return 0;    
}