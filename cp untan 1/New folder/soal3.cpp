#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long int a[n];
    unsigned long long int b[n];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << b[i] << endl;
    }

    return 0;
}
