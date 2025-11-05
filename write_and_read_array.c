// Write a C program to read and print elements of array.
#include <stdio.h>
#define MAX_SIZE 10
int main()
{
    int arr[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("Enter element %d : \n", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < MAX_SIZE; j++)
    {
        printf("%d, ", arr[j]);
    }
    printf("\n");
    return 0;
}