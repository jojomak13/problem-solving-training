#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    int arr[] = {8, 4, 2, 6};
    cout << (n == 0 ? 1 : arr[(n - 1) % 4]);
}