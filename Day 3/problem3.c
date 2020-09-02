// https://www.codechef.com/problems/CUTBOARD

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n > 0) {
	    int a,b;
	    scanf("%d %d\n", &a,&b);
	    printf("%d\n", (a-1)*(b-1));
	    n--;
	}
	return 0;
}
