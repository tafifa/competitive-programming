#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, hLim;
  cin >> n >> hLim;
  int h[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    (h[i] > hLim) ? sum += 2 : sum += 1;
  }
  cout << sum << endl;

  return 0;
}