#include <iostream>
using namespace std;

int main()
{
    //declration
    int n;

    //input
    cin >> n;

    //process
    int year = n / 365;
    int yearA = n - year*365;

    int month = yearA / 30;
    int monthA = yearA - month*30;

    int day = monthA;

    //output
    cout << year << " ano(s)\n" << month << " mes(es)\n" << day << " dia(s)" << endl;

    return 0;
}