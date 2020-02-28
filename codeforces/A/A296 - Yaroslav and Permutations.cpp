#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int *arr = new int(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	

	for(int i = 0; i < n; i++){
		int counter = 0;

		for(int j = 0; j < n; j++)
			if(arr[i] == arr[j]) counter++;
		
		if(n < 2*counter - 1){
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}