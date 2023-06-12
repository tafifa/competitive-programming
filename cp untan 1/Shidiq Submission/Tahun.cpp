#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define endl '\n'

int main() {
    fastio
    ll n; cin >> n;
    if (n == 1) cout << "2010";
    else if (n == 2) cout << "2012";
    else if (n % 2 != 0) cout << 2010 + (((n+1)/2) - 1) * 8;
    else if (n % 2 == 0) cout << 2012 + ((n/2) - 1) * 8;
    return 0;
}