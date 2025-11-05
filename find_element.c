// C program to search element in an array
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
    int search;
    scanf("%d", &search);
    int found;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == search)
        {
            printf("At index : %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element Not Found\n");
    }
}