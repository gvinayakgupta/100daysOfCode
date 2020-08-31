// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
