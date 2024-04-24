#include<bits/stdc++.h>
using namespace std;

int main () {   
    int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		int res = 0;
		for (int i = 1; i < n; i++){
			int temp;
			cin >> temp;
			res += temp;
		}
		
		cout << -1 * res << "\n";
	}
	
	return 0;
}

// solution to problem 1877A of codeforces, rated 800//
