// write a program which take a input form the user and tells us where the numbe is smaller or greater than 39 or equals to 39.

#include<stdio.h>

int main(){

    int userInput;
    printf("Enter your number:\n");
    scanf("%d", &userInput);

    if(userInput<39){
        printf("The number entered by you is less than 39");
    }
    else if(userInput==39){
     printf("The number entered by you is equal to 39");
    }
    else{
        printf("The number entered by you is greater than 39");
    }

    return 0;
}