// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

// This solution was partially accepted

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i;
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (i = 0; i < strlen(s); i++)
    {
        char k = s[i];
        if (isdigit(k))
            arr[atoi(&k)]++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
