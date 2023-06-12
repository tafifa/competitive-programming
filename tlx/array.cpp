#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  // Set B
  // int a[100];
  // int n = 0;
  // while(cin >> a[n]) n++;
  
  // for (int i = n-1; i >= 0; i--) {
  //   cout << a[i] << '\n';
  // }

  // Set C
  // int n; cin >> n;
  // int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

  // sort(a, a+n);
  
  // int temp, mod = 0, res = 0; 
  // for (int i = 0; i < n; i++) {
  //   temp = 0; 
  //   for (int j = i+1; j < n; j++) {
  //     if (a[i] != a[j]) break;
  //     else temp++;
  //   }
  //   if (temp >= mod && a[i] > res) {
  //     mod = temp;
  //     res = a[i];
  //   }
  // }

  // cout << res << '\n';

  // Set D
  // int n, m; cin >> n >> m;
  // int a[n][m];
  // for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
  
  // int r[m][n];
  // for (int i = 0; i < m; i++) {
  //   for (int j = n-1; j > 0; j--) {
  //     cout << a[j][i]
  //   }
  // }

  // Set E
  int n, m, p; cin >> n >> m >> p;
  int nm[n][m]; for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> nm[i][j];
  int mp[m][p]; for (int j = 0; j < m; j++) for (int k = 0; k < p; k++) cin >> mp[j][k];

  int res[n][p] = {0};
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < p; k++) {
      for (int j = 0; j < m; j++) {
        res[i][j] += nm[i][k] * mp[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int k = 0; k < p; k++) {
      cout << res[i][k] << ' ';
    } cout << '\n';
  }


  return 0;
}
/*
6
1 3 2 4 1 4
1 1 2 3 4 4
*/