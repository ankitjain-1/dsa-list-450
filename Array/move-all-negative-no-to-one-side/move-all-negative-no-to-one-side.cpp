// Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Fun Prototypes
void negativeOneSide(int a[], int n);

void inputArr(int a[], int n) {
  int i = 0;
  while (n--) {
    cin >> a[i];
    i++;
  }
}

void printArray(const int a[], int n) {
  int i = 0;
  while (n--) {
    cout << a[i] << ' ';
    i++;
  }
  cout << '\n';
}

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
    inputArr(a, n);
    printArray(a, n);
    negativeOneSide(a, n);
    printArray(a, n);
  }
  return 0;
}
// Driver Code Ends

// Solution Code starts

void swap(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

void negativeOneSide(int a[], int n) {
  int start = 0, end = n - 1;
  while (start < end) {
    while (a[start] < 0) {
      start++;
    }
    while (a[end] >= 0) {
      end--;
    }
    if (start < end) swap(a[start], a[end]);
  }
}