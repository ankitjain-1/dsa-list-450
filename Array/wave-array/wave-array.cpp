// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
 public:
  // Function to convert given array to wave like array
  // arr: input array
  // n: size of array
  // Your code here

  void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
  }

  void convertToWave(int* arr, int n) {
    for (int i = 0; i < n - 1; i += 2) {
      swap(arr[i], arr[i + 1]);
    }
  }
};

// { Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t, n;
  cin >> t;    // Input testcases
  while (t--)  // While testcases exist
  {
    cin >> n;                                 // input size of array
    int a[n];                                 // declare array of size n
    for (int i = 0; i < n; i++) cin >> a[i];  // input elements of array
    Solution ob;
    ob.convertToWave(a, n);

    for (int i = 0; i < n; i++) cout << a[i] << " ";  // print array

    cout << endl;
  }
}  // } Driver Code Ends