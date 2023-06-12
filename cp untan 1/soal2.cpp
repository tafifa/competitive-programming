#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll unsigned long long 

int main() {
    fastIO;

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
      ll t, b;
      cin >> t >> b;
      cout << ((t+b)*(b-t+1))/2 << '\n';
    }

    return 0;
}