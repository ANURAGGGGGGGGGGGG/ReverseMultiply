#include <stdio.h>

int main()
{
    int n = 10;
    int i = 10;
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i--;
    } while (i >= 1);
    return 0;
}