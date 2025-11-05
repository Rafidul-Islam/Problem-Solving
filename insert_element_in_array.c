// C program to insert an element in array
#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size\n");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int newElement;
    printf("Enter new element\n");
    scanf("%d", &newElement);
    size++;
    arr[size - 1] = newElement;
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}