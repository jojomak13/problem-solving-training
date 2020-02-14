#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;

    while (cin >> l)
    {
        if (!l)
            break;

        char firstSign = ' ';
        int firstSignIndex = 0;

        int cPath = 0, minPath = INT_MAX;

        string s;
        cin >> s;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'Z')
            {
                minPath = 0;
                break;
            }

            if (s[i] != '.')
            {
                if (firstSign == ' ' || firstSign == s[i])
                {
                    firstSign = s[i];
                    firstSignIndex = i;
                }
                else if (firstSign != s[i])
                {
                    cPath = i - firstSignIndex;
                    minPath = min(cPath, minPath);

                    firstSign = s[i];
                    firstSignIndex = i;
                }
            }
        }

        cout << minPath << endl;
    }
}