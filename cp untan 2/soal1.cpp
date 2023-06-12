#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  double a, b, c; cin >> a >> b >> c;

  if (a + b == c) cout << "YA\n";
  else if (a - b == c || b - a == c) cout << "YA\n";
  else if (a * b == c || b * a == c) cout << "YA\n";
  else if (a / b == c || b / a == c) cout << "YA\n";
  else cout << "TIDAK\n";

  return 0;
}