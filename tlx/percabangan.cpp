#include <iostream>
#include <string>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  // Set B
  // int n; cin >> n;
  // if (n > 0) cout << n << '\n';

  // Set C
  // int n; cin >> n;
  // if (n % 2 == 0 && n > 0) cout << n << '\n';

  // Set D
  // int n; cin >> n;
  // cout << (n > 0 ? "positif" : (n == 0 ? "nol" : "negatif")) << '\n';

  // Set E
  // int n; cin >> n;
  // switch (to_string(n).size()) {
  //   case 1 : cout << "satuan"; break;
  //   case 2 : cout << "puluhan"; break;
  //   case 3 : cout << "ratusan"; break;
  //   case 4 : cout << "ribuan"; break;
  //   case 5 : cout << "puluhribuan"; break;
  //   case 6 : cout << "ratusribuan"; break;
  //   case 7 : cout << "jutaan"; break;
  //   case 8 : cout << "puluhjutaan"; break;
  //   case 9 : cout << "ratusjutaan"; break;
  //   case 10 : cout << "milyar"; break;
  // } cout << '\n';

  // Set F
  double n; cin >> n;
  (n > 0 ? (cout << int(n) << ' ' << int(n)+1) :  (cout << int(n)-1 << ' ' << int(n))); cout << '\n';

  // Set G
  // int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  // cout << abs(x1 - x2) + abs(y1 - y2) << '\n';
  
  return 0;
}