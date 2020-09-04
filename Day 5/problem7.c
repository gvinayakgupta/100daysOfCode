// https://www.codechef.com/problems/MATCHES

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	int stk[] = {6,2,5,5,4,5,6,3,7,6};
	while(T > 0) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    a = a+b;
	    b = 0;
	    while(a>0) {
	        b += stk[a%10];
	        a = a/10;
	    }
	    printf("%d\n", b);
	    T--;
	}
	return 0;
}