#include <stdio.h>

int main(){
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    int z = x + y;

    printf("The sum of both the given number is: %d", z);
    return 0;
}