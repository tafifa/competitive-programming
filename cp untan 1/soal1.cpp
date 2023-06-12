#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastIO;

    string num; cin >> num;

    int len = num.length()-1;

    if (num[len] == '0') {
        for (int i = num[len]; i >= 0; i--) {
            if (num[i] != '0') {
                cout << num[i];
            }
        }
    }
    cout << '\n';

    return 0;
}