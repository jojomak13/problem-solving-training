#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, top, bottom;
    cin >> n >> top;
    
    bottom = 7 - top;

    int a, b;
    while(n--){
        cin >> a >> b;

        if((a == top || a == bottom) || (b == top || b == bottom)){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
