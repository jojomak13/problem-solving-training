#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    string s;
    vector<int> freq(26, 0);

    cin >> n >> s;

    for(int i = 0, len = s.size(); i < len; i++)
        freq[s[i] - 'a']++;


    string res = "";
    for(int i = 0, len = freq.size(); i < len; i++){
        if(freq[i] && freq[i] % n  == 0)
            res.append(freq[i] / n, char(i + 'a'));

        else if(freq[i] && freq[i] % n != 0){
            printf("-1");
            return 0;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%s", res.c_str());
}   