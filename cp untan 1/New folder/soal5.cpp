#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            arr[i-1] += 1;
            arr[i] += 1;
            arr[i+1] += 1;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " " ;
            }
            cout << endl;
            add += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    if (add > n)
    {
        cout << "-1" << endl;
    }
    else cout << add << endl;
    return 0;
}
