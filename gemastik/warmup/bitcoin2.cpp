#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  int sum = 0;

  int arr[n]; 
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += max(arr[i]-arr[i-1], 0);
  }
  cout << sum << endl;

  return 0;
}