// Partially accepted
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull solve()
{
    ull n, k, pending = 0, read, cc = 0;
    cin >> n >> k;
    for (ull i = 1; i <= n; i++)
    {
        cin >> read;
        read = read + pending;
        if (read < k)
            return i;
        pending = read - k;
    }
    cc = (pending / k) + 1;
    return cc + n;
}

int main()
{
    ull testCases;
    cin >> testCases;
    for (ull tidx = 1; tidx <= testCases; tidx++)
    {
        cout << solve() << endl;
    }
    return 0;
}