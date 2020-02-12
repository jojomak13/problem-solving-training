#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, string> dict;

    char ch;
    string word;
    while (ch = getchar()){
        if(ch == EOF) break;

        if(isalpha(ch)){
            ch = tolower(ch);
            word += ch;
        } else if(!word.empty()){
            dict[word] = word;
            word = "";
        }
    }

    map<string, string>::iterator it2;
    for(it2 = dict.begin(); it2 != dict.end(); it2++)
        cout << it2->second << endl;
}