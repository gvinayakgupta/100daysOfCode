// https://www.codechef.com/problems/PCJ18B

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T > 0) {
	    int N, ans;
	    scanf("%d", &N);
	    ans = N*(N+1)*(N+2)/6;
	    printf("%d\n", ans);
	    T--;
	}
	return 0;
}