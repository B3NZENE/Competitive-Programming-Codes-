#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
		int n;
		cin >> n;
		
		vector<pair<int, int>> vec;
		
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			vec.push_back(make_pair(i + 1, temp));
		}
		int flag = 1;

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (vec[i].second == vec[j].first) {
					if  (vec[j].second == vec[i].first) {
						cout << "2" << "\n";
						flag = 0;
						break;
					}
				}
			}
			if (!flag) {
				break;
			}
		}
		
		if (flag) {
			cout << "3" << "\n";
		}
		
    }

    return 0;
}

// solution to problem 1969A of codeforces//
