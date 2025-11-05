#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int digits[10];
        int count = 0;
        for (int i = 0; x > 0; i++)
        {
            digits[i] = x % 10;
            x /= 10;
            count++;
        }
        int minNum = digits[0];
        for (int i = 0; i < count; i++)
        {
            if (minNum > digits[i])
            {
                minNum = digits[i];
            }
        }
        printf("%d\n", minNum);
    }
    return 0;
}