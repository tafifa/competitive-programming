#include <iostream>
#include <map>
using namespace std;

#define ll unsigned long long
const ll Mod = 1000000007;
map<ll,ll> fib;

ll fibfunc(ll n) {
  if (fib.count(n)) return fib[n];
  ll k = n/2;
  if (n % 2 == 0) return fib[n] = (fibfunc(k)*fibfunc(k) + fibfunc(k-1)*fibfunc(k-1)) % Mod;
  else return fib[n] = (fibfunc(k)*fibfunc(k+1) + fibfunc(k-1)*fibfunc(k)) % Mod;
}

int main() {
  int n; cin >> n;

  fib[0] = 1, fib[1] = 1;

  ll res = fibfunc(n);

  cout << res << endl;

  return 0;
}