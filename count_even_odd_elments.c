// Write a C program to count total number of even and odd elements in an array.
#include <stdio.h>
int main()
{
    int arr[10];
    int even = 0, odd = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even : %d\nOdd : %d\n", even, odd);
}