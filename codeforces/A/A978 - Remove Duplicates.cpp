#include <bits/stdc++.h>
 
using namespace std;

bool hasNumber(vector<int> list, int number)
{
    for(int i = 0; i < list.size(); i++)
        if(list[i] == number) return true;
    
    return false;
}

main()
{
    int n;
    scanf("%d", &n);

    vector<int> list(n), res(n, 0);
    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }

    int counter = 0;
    for(int i = n - 1; i >= 0; i--){
        if(!hasNumber(res, list[i])){
            res[n - i - 1] = list[i];
            counter++;
        }
    }

    printf("%d\n", counter);
    for(int i = n - 1; i >= 0; i--){
        if(res[i])
            printf("%d ", res[i]);
    }
}   