#include<stdio.h>
#define MAX 100

    int size, i, temp;
    int arr[MAX];

void input();  //forward declearation
void output(); //forward declearation
void acc();    //forward declearation
void des();    //forward declearation
void xchg();   //forward declearation
void del();    //forward declearation
void insert(); //forward declearation

int main() 
{
    //setting of the number of entries
    printf("Enter the size of arr(note max size is 1000): ");
    scanf("%d", &size);

    input();  //input of the array

    printf("All the entries are as follow: \n");

    output(); //output of the array

    printf("Arranging your entries: \n");
    printf("Arranged entries are as follow: \n");

    des();
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

void acc(){
    //arranging in ascending order
    for (int k = 0; k < size; k++)
    {
        for (int l = k+1; l < size; l++)
        {
            if (arr[k]>arr[l])
            {
                temp = arr[k];
                arr[k] = arr[l];
                arr[l] = temp;
            }
            
        }
        
    }       
}

void des(){
    //arranging in ascending order
    for (int k = 0; k < size; k++)
    {
        for (int l = k+1; l < size; l++)
        {
            if (arr[k]<arr[l])
            {
                temp = arr[k];
                arr[k] = arr[l];
                arr[l] = temp;
            }
            
        }
        
    }   
}