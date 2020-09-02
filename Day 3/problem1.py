# https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/navi-and-maths/

# This solution was partially accepted
import itertools

for i in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    subs = []
    for l in range(2, n+1):
        subs = subs + (list(itertools.combinations(arr, l)))
    maxPmod = 0
    mod = int(1e9 + 7)
    for xarr in subs:
        pro = 1
        for x in xarr:
            pro = (pro*(x%mod))%mod
        pro = int(pro%mod)
        add = 0 
        for x in xarr:
            add = (add+(x%mod))%mod
        add = int(add%mod)
        P = (pro * (pow(add, mod-2, mod)%mod))%mod
        if(maxPmod < P):
            maxPmod = P
    print("Case #"+str(i+1)+":",maxPmod)