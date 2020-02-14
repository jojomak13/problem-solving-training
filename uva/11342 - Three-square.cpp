#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests, k;
    cin >> tests;

    while (tests--)
    {
        int a, b, c;
        bool isFound = false;
        cin >> k;

        for (a = 0; a * a < k; a++)
        {
            int aa = pow(a, 2);

            for (b = 0; b * b < (k - aa); b++)
            {
                int bb = pow(b, 2);

                c = sqrt(k - aa - bb);

                if (aa + bb + (c * c) == k)
                {
                    isFound = true;
                    break;
                }
            }

            if (isFound)
                break;
        }

        if (isFound)
            cout << a << " " << b << " " << c << endl;
        else
            cout << -1 << endl;
    }
}