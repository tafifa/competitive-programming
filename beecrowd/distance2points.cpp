#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
 
    //declaration
    double x1, x2, y1, y2, sqr, dist;

    //input
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    //process
    //dist = pow(x2-x1,2)+pow(y2-y1,2);
    dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    sqr = sqrt(dist);

    //output
    cout << fixed << setprecision(4) << sqr << endl;
 
    return 0;
}
