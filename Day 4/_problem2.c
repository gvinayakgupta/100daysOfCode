// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

// A bit better approach without allocating a whole string and also without using ctype.h isdigit

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s;
    int i;
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(scanf("%c", &s) == 1) {
        if(s >= '0' && s <= '9')
            arr[s-'0']++;
    }
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
