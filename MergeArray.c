// C program to merge two sorted array
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter Array 1 Size : ");
    scanf("%d", &s1);
    printf("Enter Array 2 Size : ");
    scanf("%d", &s2);

    s3 = s1 + s2;
    int arr1[s1], arr2[s2], arr3[s3];
    // Taking array 1 Elements
    for (int i = 0; i < s1; i++)
    {
        printf("Enter Array1 element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    // Taking array 2 Elements
    for (int i = 0; i < s2; i++)
    {
        printf("Enter Array1 element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }
    // Swaping Arry1 Element to Array 3
    for (int i = 0; i < s1; i++)
    {
        arr3[i] = arr1[i];
    }
    // Swaping Arry2 Element to Array 3
    for (int i = 0; i < s2; i++)
    {
        arr3[s1 + i] = arr2[i];
    }
    // Showing Array 3
    for (int i = 0; i < s3; i++)
    {
        printf("%d, ", arr3[i]);
    }
}