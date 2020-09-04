// https://www.codechef.com/problems/LUCKFOUR

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T > 0) {
	    long n;
	    int count=0;
	    scanf("%ld",&n);
	    while(n>0) {
	        if(n%10 == 4)
	            count++;
	        n = n/10;
	    }
	    printf("%d\n", count);
	    T--;
	}
	return 0;
}