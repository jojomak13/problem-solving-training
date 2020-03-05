#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
   int tests;
   scanf("%d", &tests);

    while(tests--){
        int n, m, q;
        string s;
        scanf("%d %d", &n, &m);

        vector<int> mis(n + 2, 0), ans(26, 0);

        cin >> s;

        mis[1]++;
        for(int i = 0; i < m; i++){
            scanf("%d", &q);
            mis[1]++;
            mis[q+1]--;
        }

        for(int i = 1; i <= n; i++){
            mis[i] += mis[i - 1];
            ans[s[i - 1] - 'a'] += mis[i];
        }

        for(int i = 0; i < 26; i++)
            printf("%d%c", ans[i], " \n"[i + 1 == 26]);
    }

}   