# https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/navi-and-maths/

# Finally found a solution

for t in range(int(input())):
    input()
    P = [(1, 0, 0)]
    mod = int(1e9 + 7)
    for xarr in map(int,input().split()):
        for j in range(len(P)):
            x,y,z = P[j]
            P.append(( (x*xarr)%mod, (y+xarr)%mod, z+1 ))
    print("Case #%d:" % (t+1), max((x*pow(y, mod-2, mod))%mod for x, y, z in P if z>1))