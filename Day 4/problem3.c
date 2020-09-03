// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/

// Partially accepted

#include <stdio.h>
 
int main() {
	int n;
	scanf("%d", &n);
	int arr[n],i,j,k,l;
	for(i=0;i<n;i++) scanf("%d ",&arr[i]);
	int max = -1000;
	for(i=0;i<n;i++){
		int s = 0;
		for(j=0,k=i;k<n;){
			int _s = 0;
			for(l=0;l<=j && k+j < n;l++) {
				_s += arr[k+l];
			}
			s += _s;
			j++;
			k+=j;
		}
		if(s > max) max = s;
	}
	printf("%d", max);
	return 0;
}