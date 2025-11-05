#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int results[t];
    for (int i = 0; i < t; i++)
    {
        int n, j, k;
        scanf("%d %d %d", &n, &j, &k);
        int palyers[n];
        for (int m = 0; m < n; m++)
        {
            scanf("%d", &palyers[m]);
        }
        int strongest = palyers[0];

        // Find the strongest player in the array
        for (int p = 0; p < n; p++)
        {
            if (palyers[p] > strongest)
            {
                strongest = palyers[p];
            }
        }
        if (k == 1 && palyers[j - 1] != strongest)
        {
            results[i] = 0;
        }
        else
        {
            results[i] = 1;
        }
    }

    for (int i = 0; i < t; i++)
    {
        if (results[i] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}