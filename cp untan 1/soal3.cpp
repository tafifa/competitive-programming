#include <iostream>
#include <vector>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll unsigned long long 

int main() {
    fastIO;

    ll n, p; cin >> n >> p;

    vector<ll> vec;

    for (int i = 0; i < n; i++) {
      int t; cin >> t;
      if (t != p) vec.push_back(t);
    } 

    cout << vec.size() << '\n';
    for (int i = 0; i < vec.size(); i++) {
      cout << vec[i];
      if (i != vec.size()-1) cout << ' ';
    }
    cout << '\n';

    return 0;
}