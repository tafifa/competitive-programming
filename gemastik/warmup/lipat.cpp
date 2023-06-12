#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  int lenP[n], lenL[n], fold[n];

  for (int i = 0; i < n; i++) {
    cin >> lenP[i] >> lenL[i] >> fold[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < fold[i]; j++) {
      if (lenP[i] > lenL[i]) lenP[i] /= 2;
      else lenL[i] /= 2;
    }
  }

  for (int i = 0; i < n; i++) {
    if (lenP[i] > lenL[i]) swap(lenP[i], lenL[i]);
    cout << lenL[i] << " " << lenP[i] << endl;;
  }

  return 0;
}