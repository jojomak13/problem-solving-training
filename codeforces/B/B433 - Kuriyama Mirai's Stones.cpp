#include <bits/stdc++.h>
 
using namespace std;
 
main() {

    int n, m;
    scanf("%d", &n);

    deque<long long> list(n), sortedList(n);
 
    for(int i = 0; i < n; i++)
        scanf("%lld", &list[i]);   

    sortedList = list;
    sort(sortedList.begin(), sortedList.end());

    list.push_front(0);
    sortedList.push_front(0);

    for(int i = 1; i <= n; i++){
        list[i] += list[i-1];
        sortedList[i] += sortedList[i-1];
    }

    scanf("%d", &m);
 
    int type, start, end;
    for(int i = 0; i < m; i++){
        scanf("%d %d %d", &type, &start, &end);
 
        if(type == 1)
            printf("%lld\n", list[end] - list[start-1]);
        else 
            printf("%lld\n", sortedList[end] - sortedList[start-1]);
    }
}   