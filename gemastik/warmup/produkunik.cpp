#include <iostream>
using namespace std;

#define ll unsigned long long

int main() {
  ll min, max; cin >> min >> max;
  ll a, b, c; cin >> a >> b >> c;
  ll sum = 0;

  for (ll i = min; i <= max; i++) {
    if (i % a == 0 && i % b != 0 && i % c != 0) sum += 1;
    if (i % b == 0 && i % a != 0 && i % c != 0) sum += 1;
    if (i % c == 0 && i % a != 0 && i % b != 0) sum += 1;
  }
  cout << sum << endl;

  return 0;
}