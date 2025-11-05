// C program to find reverse of array
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
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", a[i]);
    }
    printf("\n");
    return 0;
}