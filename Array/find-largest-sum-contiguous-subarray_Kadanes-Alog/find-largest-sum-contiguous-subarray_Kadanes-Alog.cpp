// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t, n;

  cin >> t;    // input testcases
  while (t--)  // while testcases exist
  {
    cin >> n;  // input size of array

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];  // inputting elements of array

    cout << maxSubarraySum(a, n) << endl;
  }
}
// } Driver Code Ends

int maxSubarraySum(int arr[], int n) {
  // Your code here
  int localMax = 0;
  int globalMax = 0;
  for (int i = 0; i < n; i++) {
    localMax += arr[i];
    if (localMax < 0) localMax = 0;
    globalMax = max(globalMax, localMax);
  }
  return globalMax;
}