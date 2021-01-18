// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void sort012(int[], int);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    cout << endl;
  }
  return 0;
}

// } Driver Code Ends

void insertNum(int a[], int start, int end, int num) {
  for (int i = start; i < end; i++) {
    a[i] = num;
  }
}

void sort012(int a[], int n) {
  int zeros = 0, ones = 0, twos = 0;
  int sz = n;
  while (sz--) {
    if (a[sz] == 0)
      zeros++;
    else if (a[sz] == 1)
      ones++;
    else if (a[sz] == 2)
      twos++;
  }
  insertNum(a, 0, zeros, 0);             // (a, 0, 1, 0)
  insertNum(a, zeros, zeros + ones, 1);  // (a, 2, )
  insertNum(a, zeros + ones, zeros + ones + twos, 2);
}