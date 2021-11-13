// THIS FILE HAS BEEN FIXED BY ROHAN ON BRANCH F1
// write a program which gives +,-,/,* values.....
//1
#include<stdio.h>

int main(){

    // these variable are for storing user input
    int x, y;
    // these variable are to store the results
    int a, b, c, d;

    printf("Enter your first number:");
    scanf("%d",&x);

    printf("Enter your second number:");
    scanf("%d", &y);

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;

    printf("The Sum of these 2 number is: %d\n", a);
    printf("The substaction of these 2 number is: %d\n", b);
    printf("The multiplication of these 2 number is: %d\n", c);
    printf("The division of these 2 number is: %d\n", d);
    
    return 0;
}