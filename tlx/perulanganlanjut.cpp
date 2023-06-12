#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  // Set A
  // int n; cin >> n;
  // for (int i = 0; i <= n; i++) {
  //   if (i % 10 == 0) continue;
  //   if (i == 42) {
  //     cout << "ERROR\n"; break;
  //   }
  //   cout << i << '\n';
  // }

  // Set B
  // int n; cin >> n;
  // for (int i = 1; i <= n; i++) {
  //   for (int j = n-i; j > 0; j--) cout << ' ';
  //   for (int k = 1; k <= i; k++) cout << '*';
  //   cout << '\n';
  // }

  // Set C
  int n; cin >> n;
  int itr = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      cout << itr; 
      itr = (itr != 9) ? itr + 1 : 0;
    } cout << '\n';
  }

  return 0;
}