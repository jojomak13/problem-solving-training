#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, input;
    set<int> levels;

    // get levels
    cin >> n;

    // Get little X levels
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> input;
        levels.insert(input);
    }

    // Get little Y levels
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> input;
        levels.insert(input);
    }

    if (levels.size() < n)
        cout << "Oh, my keyboard!";
    else
        cout << "I become the guy.";
}