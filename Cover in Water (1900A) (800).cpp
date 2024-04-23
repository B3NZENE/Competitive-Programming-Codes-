#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
      int n;
      int flag = 1;
      cin >> n;

      string s;
      cin >> s;

      if (n >= 3) {
          for (int i = 0; i < n - 2; i++) {
              if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == '.') {
                  cout << "2" << "\n";
                  flag = 0;
                  break;         
              }
          }
      }
    
      if (flag) {
          int empty_cell = 0, blocked_cell = 0;
      
          for (int i = 0; i < n; i++) {
              if (s[i] == '.') {
                  empty_cell++;
              } else {
                  blocked_cell++;
              }
          }
          cout << empty_cell << "\n";
      }
  }    
    
  return 0;
}

// solution to problem 1900A of codeforces, rated 800//
