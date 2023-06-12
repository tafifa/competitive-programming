#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define endl '\n'

int main() {
    fastio;
    string str;
    getline(cin, str);

    reverse(str.begin(), str.end());
    
    for (ll i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            for (ll j = i+1; j < str.length(); j++) {
                if (str[j] != '0') {
                    cout << str.substr(j, str.length()-j);
                    break; 
                }                
            } 
        }
        else cout << str << endl;
        break;
    }
    
    return 0;
}