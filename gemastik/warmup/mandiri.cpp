#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int modFunc(int a, int b) {
  int count = 0; 
  bool mod[b+1];
  memset(mod, true, sizeof(mod));

  for (int i = 2; i <= b; i++) {
      if (mod[i]) {
        for (int j = 2; j <= a; j++) {
          if (i % j == 0) {
            mod[i] = false;
          }
        }
      }
    }
    for (int i = 2; i <= b; i++) {
      if (mod[i]) count++;
    }

  return count;
}

int main() {
    fastio();
    int n; cin >> n;
    int res[n];
    for (int i = 0; i < n; i++) {
      ll a, b;
      cin >> a >> b;
      res[i] = modFunc(a,b);
    }
    for (int i = 0; i < n; i++) {
      cout << res[i] << endl;
    }

    return 0;
}