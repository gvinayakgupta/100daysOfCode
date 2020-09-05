// Monk and Rotation

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long n,k,i,j;
		scanf("%ld %ld",&n,&k);
		k = k%n;
		long arr[n];
		for(i=0;i<n;i++) scanf("%ld ", &arr[i]);
		for(i=n-k;i<n;i++) {
			printf("%ld ", arr[i]);
		}
		for(i=0;i<n-k;i++) {
			printf("%ld ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}