// https://www.codechef.com/problems/ICL1902

#include <stdio.h>
#include <math.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T > 0) {
	    int n, count=0;
	    scanf("%d",&n);
	    while(n > 0){
	        int x = (int)sqrt(n);
	        n -= x*x;
	        count++;
	    }
	    printf("%d\n",count);
	    T--;
	}
	return 0;
}