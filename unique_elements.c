// C program to print all unique elements in array
// Algorithm:
// 1 = first loop through the array, so that it can access array elements a[i] ;
// 2 = again run a loop to check the elements
// 3 = if  i != j (Means Their position) and if their Element is same then they are not unique
#include <stdio.h>
int main()
{

    int arr[5] = {1, 1, 3, 2, 2};

    for (int i = 0; i < 5; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < 5; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            printf("%d\n", arr[i]);
        }
    }
}