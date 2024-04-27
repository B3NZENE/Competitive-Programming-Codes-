#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, k;
		cin >> n >> k;
		
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		sort(arr, arr + n);
		
		vector<int> vec;
		
		for (int i = 0; i < n-1; i++) {
			if ((arr[i + 1] - arr[i]) > k) {
				vec.push_back(i + 1);
			}
		}
		
		if (vec.size() == 0) {
			cout << "0" << "\n";
		} else {
			int vec_len = vec.size();
			int diff = max(vec[0], (n - vec[vec_len - 1]));
			
			for (int i = 0; i < vec_len-1; i++) {
				if ((vec[i + 1] - vec[i]) > diff) {
					diff  = vec[i + 1] - vec[i];
				}
			}
			
			cout << n - diff << "\n";
		}
	}
	
	return 0;
}

// solution to problem 1850D of codeforces, rated 900//
