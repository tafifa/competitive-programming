#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dis;
    double fue, con;

    cin >> dis;
    cin >> fue;

    con = (double)dis / fue;

    cout << fixed << setprecision(3) << con << " km/l" << endl;

    return 0;
}