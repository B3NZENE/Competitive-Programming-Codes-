#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
      int n;
	  cin >> n;
	  
	  int arr[n];
	  
	  for (int i = 0; i < n; i++) {
		  cin >> arr[i];
	  }
	  
	  if (arr[0] != 1) {
		  cout << "NO" << "\n";
	  } 
	  else {
		  cout << "YES" << "\n";
	  }  
  }    
    
  return 0;
}

// solution to problem 1896A of codeforces, rated 800//
