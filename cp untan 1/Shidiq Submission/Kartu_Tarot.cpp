#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define endl '\n'

int main() {
    int n, k;
    cin >> n >> k;
    int p[k];
    string s;
    vector<string> vs;

    for (int i = 0; i <= n; i++) {
        getline(cin, s);
        vs.push_back(s);
    }

    for (int i = 1; i <= k; i++) cin >> p[i];

    for (int i = 1; i <= k; i++) {
        cout << vs[p[i]] << endl;
        vs.erase(vs.begin() + p[i]);
    }
    return 0;
}