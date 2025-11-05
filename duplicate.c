// C program count total duplicate elements in array
#include <stdio.h>
int main()
{
    int arr[10], count;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}