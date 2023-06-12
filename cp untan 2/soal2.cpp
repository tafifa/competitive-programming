#include <iostream>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll unsigned long long

int main() {
  fastIO;
  
  int n; cin >> n;

  ll a[n]; 
  for (int i = 0; i < n; i++) cin >> a[i];
  
  sort(a, a+n, greater<int>());

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    i++;
  }

  cout << sum << '\n';

  return 0;
}