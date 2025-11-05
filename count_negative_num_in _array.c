// Write a C program to count total number of negative elements in an array
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int negative = 0;
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] < 0)
        {
            negative++;
        }
    }
    printf("Total Negative Nmbers : %d\n", negative);
    return 0;
}