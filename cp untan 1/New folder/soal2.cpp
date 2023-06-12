#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    char i, j;

    cin >> S;
    cin >> i >> j;

    char p[S.length()];

    int x;
    for (x = 0; x < sizeof(p); x++) {
        p[x] = S[x];
    }
    for (int x = 0; x < sizeof(p); x++)
    {
        if (p[i] == p[j])
        {
            cout << "TIDAK" << endl;
            break;
        } else cout << "YA" << endl; break;
    }

    return 0;
}
