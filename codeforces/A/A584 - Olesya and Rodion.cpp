#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
            cout << -1;

        if (n > 1)
        {
            cout << t;
            for (int i = 0; i < n - 2; i++)
                cout << 0;
        }
    }
    else
    {
        cout << t;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
    }
}