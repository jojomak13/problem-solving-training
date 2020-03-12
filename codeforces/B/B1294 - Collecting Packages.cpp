#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--){
        int n;
        bool flag = true;
        scanf("%d", &n);

        vector<pair<int, int>> packages(n);

        for(int i = 0; i < n; i++){
            int x, y;
            scanf("%d %d", &x, &y);

            packages[i] = (make_pair(x, y));
        }

        sort(packages.begin(), packages.end());

        string res = "";
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            if(packages[i].first > x){
                res.append(packages[i].first - x, 'R'); 
                x += packages[i].first - x;
            } 

            if(packages[i].second > y){
                res.append(packages[i].second - y, 'U'); 
                y += packages[i].second - y;
            } 
            
            if(packages[i].second < y || packages[i].first < x) 
                flag = false;

        }

        if(flag){
            printf("YES\n");
            printf("%s\n", res.c_str());
        } else 
            printf("NO\n");
    }
}   