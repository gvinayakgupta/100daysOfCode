// https://www.codechef.com/problems/SNCKYEAR

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T > 0) {
	    int N;
	    scanf("%d", &N);
	    if(N == 2010 || N == 2015 || N == 2016 || N == 2017 || N == 2019)
	        printf("HOSTED\n");
	    else
	        printf("NOT HOSTED\n");
	    T--;
	}
	return 0;
}