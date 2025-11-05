#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int results[t];

    for (int i = 0; i < t; i++)
    {
        int l1, l2, l3, b1, b2, b3;
        scanf("%d %d %d %d %d %d", &l1, &b1, &l2, &b2, &l3, &b3);

        // If the rectangles are placed in vertical align.The Biggest one has to be on top;The width (l1) will be maximum. Next two rectangles width have to be same to (l1); 2nd two rectangles combined height will have to be same as l1 as its a square;
        if (l1 == l2 && l2 == l3 && (b1 + b2 + b3) == l1)
        {
            results[i] = 1;
        }

        // If the rectangles are placed Horizontally the biggest height has to match l1 + l2 + l3 s value; and all of thems Heights have to be same;
        if (b1 == b2 && b2 == b3 && (l1 + l2 + l3) == b1)
        {
            results[i] = 1;
        }

        // If two rectangles are placed horizontally under the biggest rectangle then l1 = l2 + l3; and b2 == b3 and b1 + b2 =l1;
        if (l1 == l2 + l3 && b2 == b3 && b1 + b2 == l1)
        {
            results[i] = 1;
        }

        // If two rectangles are placed Vertically.
        if ((l1 + l2 == b1 && l2 == l3 && b2 + b3 == b1))
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