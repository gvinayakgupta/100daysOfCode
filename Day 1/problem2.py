# https://www.spoj.com/problems/ADDREV/

def rev(n):
	return int(str(n)[::-1])
n = int(input())
for _ in range(n):
	[i, j] = map(int, input().split())
	z = rev(rev(i) + rev(j))
	print(z)