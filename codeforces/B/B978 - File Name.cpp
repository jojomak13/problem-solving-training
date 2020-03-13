#include <bits/stdc++.h>
 
using namespace std;

main()
{
    int n;
    scanf("%d", &n);
    
    string s;
    cin >> s;

    int res = 0, counter = 0;
    char current = ' ';
    for(int i = 0; i < n; i++){
        if(s[i] == 'x' && current != 'x'){
            current = s[i];
            counter = 1;
        } else if(s[i] == current){
            counter++;
            
        } else if(s[i] != 'x'){
            current = ' ';
            counter = 0;
        }

        if(counter == 3){
            counter--;
            res++;
        }
    }

    cout << res;
}   