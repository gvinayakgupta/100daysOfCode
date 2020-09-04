// https://www.codechef.com/problems/CHOPRT

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T > 0) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a > b) printf(">\n");
	    else if(a < b) printf("<\n");
	    else printf("=\n");
	    T--;
	}
	return 0;
}