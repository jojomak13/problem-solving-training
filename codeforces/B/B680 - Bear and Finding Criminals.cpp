#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int a, n;
    scanf("%d %d", &a, &n);

    vector<int> arr(a+1, 0);
    for(int i = 1; i <= a; i++)
        scanf("%d", &arr[i]);

    int l = n - 1, r = n + 1, res = 0;

    if(arr[n] == 1)
        res++;

    while(l != 0 && r != a + 1){
        if(arr[l] == 1 && arr[r] == 1)
            res += 2;
        
        l--;
        r++;
    }

    for(int i = r; i <= a; i++)
        res += (arr[i] == 1? 1 : 0);
        
    for(int i = l; i >= 0; i--)
        res += (arr[i] == 1? 1 : 0);


    printf("%d", res);
}
