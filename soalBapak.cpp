#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;

  int l[n];
  for (int i = 0; i < n; i++) cin >> l[i];
  
  int res = INT_MIN; int idx;
  int sum[n-m+1];
  for (int i = 0; i < n-m+1; i++) {
    sum[i] = 0;
    for (int j = i; j < i+m; j++) {
      sum[i] += l[j];
    } if (sum[i] > res) {
      res = sum[i];
      idx = i;
    }
  }
  for (int i = 0; i < n-m+1; i++) {
    cout << sum[i] << ' ';
  }
  cout << '\n' << res << endl;
  cout << '\n' << idx << endl;

  return 0;
}

// int main() {
//   int n, m; cin >> n >> m;
//   int l[n];
//   int sum = INT_MIN; int x,y,z;
//   for (int i = 0; i < n; i++) {
//     cin >> l[i];
//     int sum3 = l[i] + l[i-1] + l[i-2];
//     if (i >= 2 && sum3 > sum) {
//       x = i-2+1; y = i-1+1; z = i+1;
//       sum = sum3;
//     }
//   } cout << x << ' ' << y << ' ' << z << endl;

//   return 0;
// }
