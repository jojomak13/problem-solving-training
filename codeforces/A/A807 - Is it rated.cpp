#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<pair<int, int>> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = i + 1; j < list.size(); j++)
        {
            if (list[i].first < list[j].first)
            {
                return false;
            }
        }
    }

    return true;
}

main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> list;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a != b)
        {
            cout << "rated";
            return 0;
        }

        list.push_back(make_pair(a, b));
    }

    cout << (isSorted(list) ? "maybe" : "unrated");
}
