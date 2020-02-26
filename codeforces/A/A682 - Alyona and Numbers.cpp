#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    long long res = 0;
    for(int i = 1; i <= n; i++)
        res += (m + (i % 5)) / 5;

    cout << res;
}   
