#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
  fastio();
  int x, y; cin >> x >> y;

  int n; cin >> n;

  int xi[n], yi[n]; for (int i = 0; i < n; i++) cin >> xi[i] >> yi[i];

  int m; cin >> m; ll b[m];
  for (int i = 0; i < m; i++) {
    int sum = 0;
    cin >> b[i];
		for(int j = 0; j < n; j++) if (((xi[j] - x) * (xi[j] - x)) + ((yi[j] - y) * (yi[j] - y)) <= b[i] * b[i]) sum += 1;
		cout << sum << '\n';
  }

  return 0;
}