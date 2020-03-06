#include <bits/stdc++.h>
 
using namespace std;
vector<int> recipes(200010, 0);
 
main()
{
    int n, k, q;

    scanf("%d %d %d", &n, &k, &q);

    int a, b;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);

        recipes[a]++;
        recipes[b + 1]--;
    }

    for(int i = 1; i < recipes.size(); i++){
        recipes[i] += recipes[i-1];
    }

    for(int i = 1; i < recipes.size(); i++){
        recipes[i] = (recipes[i] >= k? 1 : 0);
        recipes[i] += recipes[i - 1];
    }

    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", recipes[b] - recipes[a - 1]);
    }   

}   