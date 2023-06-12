#include <iostream>
using namespace std;

bool check(int n) {
    return n % 2;
}

int main() {
    int n, k; cin >> n >> k;
    int idx = 0; int total = 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
        total += arr[i];

        if (arr[i] == k) idx += i;
    }
    int sum = arr[idx];
    
    if (check(arr[idx-2]) == check(arr[idx]) && idx-2 > 0) sum += arr[idx-2];
    if (check(arr[idx+2]) == check(arr[idx])) sum += arr[idx+2];

    cout << total - sum << endl;

    return 0;
}