#include <bits/stdc++.h>

using namespace std;

main()
{
    long long n;
    cin >> n;

    if(n % 2 == 0)
        cout << n  / 2;
    else 
        cout << ((n+1) / 2) * -1;
}   
