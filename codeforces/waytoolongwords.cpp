#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  
  string a[n];
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    if (s.length() > 10) {
      a[i] = s[0] + to_string(s.length()-2) + s[s.length()-1];
    }
    else a[i] = s;
  }

  for (auto i : a) {
    cout << i << '\n';
  }
}