#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    int AB = (A+B+abs(A-B))/2;
    int ABC = (AB+C+abs(AB-C))/2;

    cout << ABC << " eh o maior" << endl;

    return 0;
}