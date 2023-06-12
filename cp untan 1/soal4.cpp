#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const double pi = 3.14;

int main()
{
    fastIO;

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int r,s,t; cin >> r >> s >> t;

        double Lr = pi * r * r;
        double Ls = 0.25 * s * s * sqrt(3);
        double Lt = t * t;

        double check = max({Lr, Ls, Lt});

        if (check == Lr) cout << "LINGKARAN\n";
        else if (check == Ls) cout << "SEGITIGA\n";
        else if (check == Lt) cout << "PERSEGI\n";
    } 


    return 0;
}
