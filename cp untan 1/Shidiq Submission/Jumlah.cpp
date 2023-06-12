#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
#define endl "\n"

int main() {
    fastio;
    int n; cin >> n;
    while (n--) {
        ll a, b; cin >> a >> b;
        ll s = (((b-a)+1) * (a + b)) / 2;
        cout << s << endl;
    }
    return 0;
}