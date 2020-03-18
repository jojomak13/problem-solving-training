#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int n, maxPylon = 0;
    scanf("%d", &n);

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        maxPylon = max(maxPylon, arr[i]);
    }

    printf("%d", maxPylon);
}   