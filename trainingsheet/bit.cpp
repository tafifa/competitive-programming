#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int res = 0; char opr[3];
  for (int i = 0; i < n; i++) {
    cin >> opr;
    res += 1 ? opr[1] == "+" : res -= 1;
  }

  return 0;
}