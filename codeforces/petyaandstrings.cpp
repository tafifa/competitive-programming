#include <iostream>
#include <cctype>
using namespace std;

int main() {
  string a,b; cin >> a >> b;

  int tA, tB;
  for (int i = 0; i < a.length(); i++) {
    tA = (int)toupper(a[i])-65, tB = (int)toupper(b[i])-65;
    if (tA > tB) {
      cout << 1 << '\n';
      break;
    }
    else if (tA < tB) {
      cout << -1 << '\n';
      break;
    }
  }
  if (tA == tB) cout << 0 << '\n';

  
  return 0;
}
