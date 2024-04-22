#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count[5] = {0};

    for (int i = 0; i < n; ++i) {
        int size;
        cin >> size;
        count[size]++;
    }
    int taxis = count[4] + count[3] + (count[2] + 1) / 2;
    count[1] -= count[3] + (count[2] % 2) * 2;
    if (count[1] > 0){
        taxis += (count[1] + 3) / 4;
    }
    cout << taxis << endl;

    return 0;
}

// solution to problem 158B of codeforces, rated 1100//
