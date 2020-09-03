// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <stdio.h>
#include <string.h>

int main() {
	char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i,x=0,y=0;
    for(i = 0; i < strlen(s); i++){
        if(s[i] == 'z') x++;
        else if(s[i] == 'o') y++;
    }
	if(2*x == y) printf("Yes");
	else printf("No");
	return 0;
}