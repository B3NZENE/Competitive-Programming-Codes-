#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max_result = 0;
    max_result = max(max_result, a + b + c);
    max_result = max(max_result, a * b * c);
    max_result = max(max_result, a * (b + c));
    max_result = max(max_result, (a + b) * c);
    max_result = max(max_result, (a + b + c));
    cout << max_result << endl;

    return 0;
}

// solution to problem 479A of codeforces, rated 1000//
