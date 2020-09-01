// 

#include <stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        int x, y; // Cost
        scanf("%d %d", &x, &y);
        int num, j;
        int m = 0, n = 0; // Count solved
        scanf("%d", &num);
        for (j = 0; j < num; j++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            m += a;
            n += b;
        }
        if (x < y)
        {
            if (m < n)
                printf("%d\n", m * y + n * x);
            else
                printf("%d\n", m * x + n * y);
        }
        else
        {
            if (m < n)
                printf("%d\n", m * x + n * y);
            else
                printf("%d\n", m * y + n * x);
        }
    }
    return 0;
}