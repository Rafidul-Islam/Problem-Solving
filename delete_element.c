#include <stdio.h>
int main()
{
    int size, pos;

    printf("Enter array size\n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position you want to delete\n");
    scanf("%d", &pos);

    if (pos < 0 || pos > size)
    {
        printf("Invalid Position ! Enter a valid position.");
    }
    else
    {
        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    size--;
    for (int j = 0; j < size; j++)
    {
        printf("%d, ", arr[j]);
    }
    printf("\n");
    return 0;
}