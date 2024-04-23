#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
      int n, x;
      cin >> n >> x;

      int fuel_stations[n+1], fuel_used[n+1];
      for (int i = 0; i < n; i++) {
          cin >> fuel_stations[i];
      }

      int temp = x - fuel_stations[n-1];
      temp *= 2;
      if (temp < 0) {
        temp *= -1;
      }

      fuel_used[0] = fuel_stations[0];
      for (int i = 1; i < n; i++) {
          fuel_used[i] = fuel_stations[i] - fuel_stations[i - 1];
      }

      fuel_used[n] = temp;
      sort(fuel_used, fuel_used + n + 1);

      cout << fuel_used[n] << "\n";
  }
  return 0;
}

// solution to problem 1901A of codeforces, rated 800//
