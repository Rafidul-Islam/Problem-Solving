#include <stdio.h>
int main()
{
    int s[5];
    int s2[5] = {1, 2, 3, 4, 5};
    
    printf("%zu", sizeof(s2));
    printf("%zu", sizeof(s));
}