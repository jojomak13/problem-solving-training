#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a, total;
    cin >> n >> m >> a;

    total = (n / a) + (n % a != 0);
    total *= (m / a) + (m % a != 0);

    cout << total;
}