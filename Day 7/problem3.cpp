// https://www.codechef.com/problems/CHEFSTLT

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    char s1[100], s2[100];
	    cin>>s1>>s2;
	    int m=0,g=0;
	    for(int i=0;i<strlen(s1);i++) {
	        if(s1[i] == '?' || s2[i] == '?') g++;
	        else if(s1[i] != s2[i]) m++;
	    }
	    cout<<m<<" "<<m+g<<"\n";
	}
	return 0;
}
