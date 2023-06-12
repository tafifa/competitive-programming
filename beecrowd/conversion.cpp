#include <iostream>
using namespace std;

int main()
{
    //declaration
    int n;
    //input
    cin >> n;
    //process
    int hours = n / 3600;
    int hoursA = n - hours*3600;

    int minutes = hoursA / 60;
    int minutesA = hoursA - minutes*60;

    int seconds = minutesA / 1;
    //output
    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}