#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "bbbbb";
    int n = strlen(s);
    int visited[256] = {0}; // track characters
    int start = 0, end = 0, maxLen = 0;

    while (end < n)
    {
        unsigned char c = s[end];
        if (visited[c] == 0)
        {
            visited[c] = 1;
            end++;
            if (end - start > maxLen)
                maxLen = end - start;
        }
        else
        {
            visited[(unsigned char)s[start]] = 0;
            start++;
        }
    }

    printf("Longest substring length: %d\n", maxLen);
    return 0;
}
