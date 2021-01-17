#include <iostream>
using namespace std;

std::string reverseWord(std::string);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;

    std::cout << reverseWord(s) << "\n";
  }
  return 0;
}

// } Driver Code Ends

// User function Template for C++

void swap(char &x, char &y) {
  char temp;
  temp = x;
  x = y;
  y = temp;
}

std::string reverseWord(std::string str) {
  // Your code here
  int start = 0, end = str.length() - 1;
  while (start < end) {
    swap(str[start], str[end]);
    start++;
    end--;
  }
  return str;
}
