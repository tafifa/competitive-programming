#include <iostream>
using namespace std;

int main()
{
    //declration
    int A, B, C, D;

    //input
    cin >> A >> B >> C >> D;

    //process
    bool con1 = (B > C);
    bool con2 = D > A;
    bool con3 = C + D > A + B;
    bool con4 = (C && D) >= 0;
    bool con5 = A % 2 == 0;

    //output
    /* if ( con2 && con3 && con4 && con5)  true)
    {
        cout << "Valores aceitos" << endl;
    } else cout << "Valores nao aceitos" << endl;*/

    return 0;
}