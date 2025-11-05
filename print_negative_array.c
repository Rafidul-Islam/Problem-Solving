// C program to print all negative elements in array
#include <stdio.h>
#define Max_Size 10
int main()
{
    int array[Max_Size];
    for (int i = 0; i < Max_Size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j = 0; j < Max_Size; j++)
    {
        if (array[j] < 0)
        {
            printf("[%d],", array[j]);
        }
    }
    printf("\n");
    return 0;
}