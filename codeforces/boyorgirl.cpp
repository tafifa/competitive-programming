#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s; cin >> s;

  sort(s.begin(), s.end());

  int counter = 1;
  for(int i = 1; i < s.length(); i++) {
    if (s[i] != s[i-1]) counter++;
  }

  if (counter % 2 == 0) cout << "CHAT WITH HER!\n";
  else cout << "IGNORE HIM!\n";

  return 0;
}