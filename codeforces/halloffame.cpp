#include <iostream>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;
  int n,l,r,o = -1; 

  cin >> n;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    string s; cin >> s;
    l = count(s.begin(), s.end(), 'L');
    r = t - l;
    o = s.find("LR");
    if (r == 0 || l == 0) cout << -1 << '\n';
    else if (o != -1) cout << o + 1 << '\n';
    else cout << 0 << '\n';
  }

  return 0;
}