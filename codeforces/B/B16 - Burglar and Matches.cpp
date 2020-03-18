#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    vector<pair<int, int> > arr(m);
    int a, b;
    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        arr[i] = make_pair(a, b);
    }

    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    });

    long long res = 0;
    for(int i = 0; n != 0 && i < m; i++){
        if(arr[i].first < n){
            n -= arr[i].first;
            res += arr[i].first * arr[i].second;

        } else {
            res += n * arr[i].second;
            n = 0;
        }
    }

    cout << res;
}   