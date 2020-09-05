// Monk and Inversion

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int n,i,j,k,l;
		scanf("%d", &n);
		int arr[n][n];
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				scanf("%d ",&arr[i][j]);
			}
			scanf("\n");
		}
		int count=0;
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				for(k=i;k<n;k++) {
					for(l=j;l<n;l++) {
						if(arr[k][l] < arr[i][j]) count++;
					}
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}