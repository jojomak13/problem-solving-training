#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s, res;
    cin >> s;
 
    for(int i = 0, len = s.size(); i < len; i++){
        if(s.empty() || res.back() != s[i])
            res.push_back(s.at(i));
        else 
            res.pop_back();
    }
    
    cout << res;
}