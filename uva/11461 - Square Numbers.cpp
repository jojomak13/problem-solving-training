#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b)
    {
        if (!a && !b)
            break;

        int counter = 0;
        for (int i = a; i <= b; i++)
        {
            int squaredNumber = sqrt(i);
            if (i == (squaredNumber * squaredNumber))
                counter++;
        }

        cout << counter << endl;
    }
}