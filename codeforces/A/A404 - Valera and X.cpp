#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> matrix;
    int n;
    cin >> n;

    string row;
    for (int i = 0; i < n; i++)
    {
        cin >> row;
        matrix.push_back(row);
    }

    char dChar = matrix[0][0], mChar = matrix[0][1];

    if (dChar == mChar)
    {
        cout << "NO";
        return 0;
    }

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            if ((x == y) || (x + y == n - 1))
            {
                if (matrix[x][y] != dChar)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else if (matrix[x][y] != mChar)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
}