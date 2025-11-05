// C program to find second largest number in array
#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0];
    int secondLargest = a[1];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
        if (a[i] < largest && a[i] > secondLargest)
        {
            secondLargest = a[i];
        }
    }
    printf("largest : %d\nsecondLargest : %d\n", largest, secondLargest);
    return 0;
}