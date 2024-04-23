#include <bits/stdc++.h>
using namespace std;

string caps(string text) {
    if(all_of (text.begin(), text.end(), ::isupper)) {
      transform(text.begin(), text.end(), text.begin(), ::tolower);  
    }
      
    else if(islower(text[0]) && all_of(text.begin() + 1, text.end(), ::isupper)) {
      transform(text.begin(), text.end(), text.begin(), ::tolower);
      text[0] = toupper(text[0]);
    }
  
    return text;
}

int main() {
    string text;
    cin >> text;
    cout << caps(text) << endl;
    return 0;
}

// solution to problem 131A of codeforces, rated 1000//
