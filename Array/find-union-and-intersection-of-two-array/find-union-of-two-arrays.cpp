// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int, int *, int);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) cin >> b[i];

    cout << doUnion(a, n, b, m) << endl;
  }

  return 0;
}  // } Driver Code Ends

// User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m) {
  // code here
  sort(a, a + n);
  sort(b, b + m);
  int na = n, nb = m;
  vector<int> unionArr;
  unionArr.push_back(INT_MIN);

  int p2a = 0, p2b = 0;
  while (p2a < na && p2b < nb) {
    if (a[p2a] < b[p2b]) {
      if (a[p2a] > unionArr.back()) {
        unionArr.push_back(a[p2a]);
      }
      p2a++;
    } else if (a[p2a] > b[p2b]) {
      if (b[p2b] > unionArr.back()) {
        unionArr.push_back(b[p2b]);
      }
      p2b++;
    } else {
      if (b[p2b] > unionArr.back()) {
        unionArr.push_back(b[p2b]);
      }
      p2a++;
      p2b++;
    }
  }
  while (p2a < na) {
    if (a[p2a] > unionArr.back()) unionArr.push_back(a[p2a]);
    p2a++;
  }
  while (p2b < nb) {
    if (b[p2b] > unionArr.back()) unionArr.push_back(b[p2b]);
    p2b++;
  }
  return unionArr.size() - 1;
}