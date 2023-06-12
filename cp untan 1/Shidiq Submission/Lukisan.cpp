#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
#define endl "\n"

int main() {
    fastio;
    int n, p; cin >> n >> p;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != p) v.push_back(x);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size()-1) cout << v[i];
        else cout << v[i] << " ";
    }
    return 0;
}