// Write a C program to copy all elements from an array to another array
#include <stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        int temp = arr1[j];
        arr2[j] = temp;
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d, ", arr2[k]);
    }
    return 0;
}