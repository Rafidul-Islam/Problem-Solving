// C program to put even and odd elements of array in two separate array
#include <stdio.h>
int main()
{
    int size;
    printf("Enter array Size : ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else if (a[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    int even[evenCount], odd[oddCount];
    int e = 0, o = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e++] = a[i];
        }
        else if (a[i] % 2 != 0)
        {
            odd[o++] = a[i];
        }
    }
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ,", even[i]);
    }
    printf("\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ,", odd[i]);
    }
    printf("\n");
    return 0;
}