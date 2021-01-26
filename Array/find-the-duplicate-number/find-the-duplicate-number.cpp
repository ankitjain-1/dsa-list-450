// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
 public:
  int findDuplicate(vector<int>& nums) {
    vector<int> counts(nums.size() - 1, 0);
    for (auto num : nums) {
      counts[num - 1]++;
    }
    for (int i = 0; i < counts.size(); i++) {
      if (counts[i] > 1) return 1;
    }
    return 0;
  }
};

// { Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    Solution ob;
    cout << ob.findDuplicate(arr) << endl;
  }
  return 0;
}  // } Driver Code Ends