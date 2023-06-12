#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int counter = 0;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    if (s[1] == '+') {
      counter++;
    } else if (s[1] == '-') {
      counter--;
    }
  }
  cout << counter << '\n';

  return 0;
}