import math
for _ in range(int(input())):
  n, k = map(int, input().split())
  arr = list(map(int, input().split()))
  curr = 0
  ans = -1
  for i in range(n):
    curr += arr[i]
    if(curr < k):
      ans = i
      break
    curr -= k
  if(ans == -1):
    ans = n+(math.floor(curr/k))
  print(ans+1)