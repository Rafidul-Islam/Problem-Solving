// C program to find maximum and minimum element in array
#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d :\n", i);
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    int smallest = array[0];
    for (int j = 0; j < 10; j++)
    {
        if (array[j] > largest)
        {
            largest = array[j];
        }
        if (array[j] < smallest)
        {
            smallest = array[j];
        }
    }
    printf("Largest : %d\nSmallest : %d\n", largest, smallest);
    return 0;
}