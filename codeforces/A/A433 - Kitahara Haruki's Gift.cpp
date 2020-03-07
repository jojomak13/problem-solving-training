#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
    int n, a_100 = 0, a_200 = 0;

    scanf("%d", &n);

    int input;
    for(int i = 0; i < n; i++){
        scanf("%d", &input);
        if(input == 100)
            a_100++;
        else 
            a_200++;
    }

    if ((a_100 % 2 == 0 && a_200 % 2 == 0) || (a_100 % 2 == 0 && a_200 % 2 == 1 && a_100 >= 2))
        cout<<"YES";
    else
        cout<<"NO";
}   