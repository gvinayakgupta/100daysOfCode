t = int(input())
while t:
  t= t-1
  n,k,x,y = [int(l) for l in input().split()]
  count = [0]*n
  while True:
    if count[x]:
      flag = 1
      break
    count[x] +=1
    x = (x+k)%n
    if count[y]:
      flag = 2
      break
  if k==0 or k==n:
    if x==y:
      print("YES")
    else:
      print("NO")
  elif flag==2:
    print("YES")
  else:
    print("NO")