#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int results[t];

    for (int i = 0; i < t; i++)
    {
        int a, x, y;
        scanf("%d %d %d", &a, &x, &y);

        // Calculate the distance of alice from x and y point
        int aliceX = abs(x - a);
        int aliceY = abs(y - a);

        results[i] = 0;

        for (int j = 0; j < 100; j++)
        {
            int bobX = abs(x - j);
            int bobY = abs(y - j);
            if (a == j)
                continue;
            if (bobX < aliceX && bobY < aliceY)
            {
                results[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        results[i] ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}