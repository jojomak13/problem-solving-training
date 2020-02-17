#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.find("WUB");
    while (n != -1)
    {
        if (n == 0)
            s.replace(n, 3, "");
        else
            s.replace(n, 3, " ");

        n = s.find("WUB");
    }

    cout << s;
}