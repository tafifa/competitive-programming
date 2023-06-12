#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string kristal[n];
  for (int i = 0; i < n; i++) {
    cin >> kristal[i];
  }

  int sum3[n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (kristal[i] == kristal[j]) {
        
      }
    }
  }

  // int sum = 0;
  // for (int i = 0; i < n; i++) {
  //   sum += 1;
  //   for (int j = 0; j < i; j++) {
  //     if (kristal[i] == kristal[j]) {
  //       sum -= 1;
  //       break;
  //     }
  //   }
  //   cout << sum << endl;
  // }

  return 0;
}