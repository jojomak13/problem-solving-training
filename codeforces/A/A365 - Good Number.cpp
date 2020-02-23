#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, k, counter = 0;
    string s = "0123456789";
    cin >> n >> k;

    string input;
    bool isGood = true;
    while(n--){

        cin >> input;

        for(int i = 0; i <= k; i++){
            int ch = input.find(s[i]);
            
            if(ch == -1){
                isGood = false;
                break;
            }
        }

        if(isGood)
            counter++;

        isGood = true;
    }

    cout << counter;
}
