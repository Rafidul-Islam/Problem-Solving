#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int results[t];

    for (int j = 0; j < t; j++)
    {
        int n, s;
        scanf("%d %d", &n, &s);
        int pos[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &pos[i]);
        }

        // Sorting the array (simple selection sort)
        for (int i = 0; i < n; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (pos[i] > pos[k])
                {
                    int temp = pos[i];
                    pos[i] = pos[k];
                    pos[k] = temp;
                }
            }
        }

        int min_pos = pos[0];
        int max_pos = pos[n - 1];

        int diff1, diff2;

        if (s > min_pos)
            diff1 = s - min_pos;
        else
            diff1 = min_pos - s;

        if (s > max_pos)
            diff2 = s - max_pos;
        else
            diff2 = max_pos - s;

        int min_diff = (diff1 < diff2) ? diff1 : diff2;

        int total_steps = min_diff + (max_pos - min_pos);

        results[j] = total_steps;
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", results[i]);
    }

    return 0;
}
