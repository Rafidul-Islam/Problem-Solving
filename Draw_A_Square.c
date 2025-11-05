#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int results[t];
    for (int i = 0; i < t; i++)
    {
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u);

        int korno1 = l + r;
        int korno2 = d + u;

        if (korno1 == korno2 && l == r && d == u)
        {
            results[i] = 1;
        }
        else
        {
            results[i] = 0;
        }
    }
    for (int i = 0; i < t; i++)
    {
        results[i] ? printf("Yes\n") : printf("No\n");
    }
}