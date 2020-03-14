#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--){
        int n;
        scanf("%d", &n);

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int l = 0, r = n - 1;
        while(l < n && l <= arr[l])
            l++;

        while(r >= 0 && (n - r - 1) <= arr[r])
             r--;

        if(l - 1 >=  r + 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}   