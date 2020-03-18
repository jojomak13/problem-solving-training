#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--){ 
        int n;
        string s;

        scanf("%d", &n);
        cin >> s;

        vector<int> arr;
        for(int i = 0; i < n; i++){
            if((s[i] - '0') % 2 != 0)
                arr.push_back(s[i] - '0');
        }

        if(arr.size() < 2)
            printf("-1\n");
        else 
            printf("%d%d\n", arr[0], arr[1]);
    }
}   