#include <iostream>
#include <math.h>
using namespace std;

#define ll unsigned long long

int main() {
	int n; cin >> n;
  ll res = 1;
  ll Mod = 1000000007;
  
  for (int i = 2; i <= n; i++) {
    res = (ll)pow(i, res) % Mod;
  }
  cout << res << endl;

  return 0;
}