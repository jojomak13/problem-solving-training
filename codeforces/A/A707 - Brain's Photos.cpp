#include <bits/stdc++.h>

using namespace std;

bool isblackWhite(char color)
{
    if (color == 'B' || color == 'W' || color == 'G')
        return true;

    return false;
}

main()
{
    int n, m;
    cin >> n >> m;

    char input;
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            cin >> input;

            if (!isblackWhite(input))
            {
                cout << "#Color";
                return 0;
            }
        }
    }

    cout << "#Black&White";
}
