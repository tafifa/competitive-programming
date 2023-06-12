#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[5] = {};
    for (int i = 0; i <= 4; i++)
    {
        cin >> n;
        arr[i] = n;
    }
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] <= 1)
        {
            arr[i] = 1;
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << "x[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}