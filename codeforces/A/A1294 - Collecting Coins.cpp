#include <bits/stdc++.h>
 
using namespace std;
 
int getMax(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    
    return c;
}

main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--){
        int a, b, c, n;
        scanf("%d %d %d %d", &a, &b, &c, &n);

        int maxNumber = getMax(a, b, c);

        if(maxNumber - a <= n){
            n -= (maxNumber - a);
            a += (maxNumber - a); 
        }

        if(maxNumber - b <= n){
            n -= (maxNumber - b);
            b += (maxNumber - b); 
        }

        if(maxNumber - c <= n){
            n -= (maxNumber - c);
            c += (maxNumber - c); 
        }

        if(a == b && a == c && n % 3 == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}   