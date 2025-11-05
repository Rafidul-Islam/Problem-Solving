// C program to find sum of array elements
#include <stdio.h>
int main()
{
    int array[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        sum += array[j];
    }
    printf("Sum is : %d\n", sum);
    return 0;
}