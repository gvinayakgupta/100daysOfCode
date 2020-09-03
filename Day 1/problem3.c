// https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int i, j, m;
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (i + j >= 2 * n - 1)
                m = i < j ? 2 * (n - 1) - j : 2 * (n - 1) - i;
            else
                m = i < j ? i : j;
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}
