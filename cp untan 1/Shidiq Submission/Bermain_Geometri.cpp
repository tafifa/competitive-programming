#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
#define endl "\n"

int main() {
    fastio;
    int T; cin >> T;

    while (T--) {
        int r, s, t;
        cin >> r >> s >> t;
        double lingkaran, segitiga, persegi, MAX;
        lingkaran = 3.14 * r * r;
        segitiga = 0.25 * s * s * sqrt(3);
        persegi = t * t;
        MAX = max({lingkaran, segitiga, persegi});
        if (MAX == lingkaran) cout << "LINGKARAN" << endl;
        else if (MAX == segitiga) cout << "SEGITIGA" << endl;
        else cout << "PERSEGI" << endl;
    }    
    
    return 0;
}