#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> shapeList;
    shapeList["Tetrahedron"] = 4;
    shapeList["Cube"] = 6;
    shapeList["Octahedron"] = 8;
    shapeList["Dodecahedron"] = 12;
    shapeList["Icosahedron"] = 20;

    int n, sum = 0;
    cin >> n;

    string shapeName;
    for (int i = 0; i < n; i++)
    {
        cin >> shapeName;
        sum += shapeList[shapeName];
    }

    cout << sum;
}