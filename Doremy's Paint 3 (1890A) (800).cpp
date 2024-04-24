#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
	  int n;
	  cin >> n;
	  
	  int arr[n];
	  
	  for (int i= 0; i < n; i++) {
		  cin >> arr[i];
	  }
	  
	  sort(arr, arr + n);
	  
	  int num1 = arr[0];
	  int num2 = arr[n - 1];
	  
	  if (num1 == num2) {
		  cout << "Yes" << "\n";
	  }
	  
	  else {
		  int count_num1 = 0, count_num2 = 0, flag = 1;
		  for (int i = 0; i < n; i++) {
			  if (arr[i] == num1) count_num1++;
			  else if (arr[i] == num2) count_num2++;
			  else {
				  cout << "No" << "\n";
				  flag = 0;
				  break;
			  }
		  }

	      if ((count_num1 == count_num2 || count_num1 + 1 == count_num2 || count_num1 == count_num2 + 1) && flag) {
			  cout << "Yes" << "\n";
		  }	else if (flag) {
			  cout << "No" << "\n";
		  }
	  }
  }    
    
  return 0;
}

// solution to problem 1890A of codeforces, rated 800//
