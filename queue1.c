#include<stdio.h>
#define MAX 100

    int size, i;
    int arr[MAX];

void input();
void output();

int main() 
{
    printf("Enter the size of arr(note max size is 1000): ");
    scanf("%d", &size);

    input();
        printf("All the entries are as follow: \n");
    output();     
 return 0;
}

void input(){
    //for loop for input of the array:

    for ( i = 0; i < size; i++)
    {
        printf("Enter the number to at place %d:", (i+1));
        scanf("%d", &arr[i]);
    }

}

void output(){
    //for loop to show the stored array:

    for (int j = 0; j < size; j++)
    {
        printf("%d\n", arr[j]);
    }

}