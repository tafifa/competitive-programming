#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  // Set B
  // int n; cin >> n; 
  // int temp, sum = 0;
  // for (int i = 0; i < n; i++) {
  //   cin >> temp; sum += temp;
  // }
  // cout << sum << '\n';

  // Set C
  // string s;
  // while(cin >> s) cout << s << '\n';

  // Set D
  // int temp, sum = 0;
  // while(cin >> temp) sum += temp;
  // cout << sum << '\n';

  // Set E
  // int n; cin >> n;
  // bool con = false;
  // for (int i = 1; i*i <= n; i++) if (i*i == n) con = true;
  // cout << (con ? "ya" : "bukan") << '\n';

  int n; cin >> n;
  while(n > 2 && n % 2 == 0) {
    n /= 2;
    cout << n << ' ';
  }
  cout << (n == 2 ? "ya" : "bukan") << '\n';

  // Set F
  // int n; cin >> n;
  // for (int i = n; i > 0; i--) {
  //   if (n % i == 0) cout << i << '\n';
  // }

  // Set G
  // int n; cin >> n;
  // int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

  // int maks = -100000; int mini = 100000;
  // for (int i = 0; i < n; i++) {
  //   if (a[i] > maks) maks = a[i];
  //   if (a[i] < mini) mini = a[i];
  // }
  // cout << maks << ' ' << mini << '\n';

  // Set I
  // int n, k; cin >> n >> k;
  // for (int i = 1; i <= n; i++) {
  //   if (i % k == 0) cout << '*';
  //   else cout << i;
  //   cout << ' ';
  // } cout << '\n';
  
  return 0;
}