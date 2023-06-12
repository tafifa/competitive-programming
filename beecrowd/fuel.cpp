#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
 
    //declaration
    int tim, avg;
    double fuel;

    //input
    cin >> tim;
    cin >> avg;

    //process
    fuel = (double)(avg*tim) / 12;

    //output
    cout << fixed << setprecision(3) << fuel << endl;
 
    return 0;
}
