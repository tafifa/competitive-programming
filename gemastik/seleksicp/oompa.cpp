#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
  unsigned int n;
  cin >> n;

  int arr[n];
  for (unsigned int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  string str;
  for (unsigned long long i = 0; i < 7; i++) {
    str += to_string(arr[i]);
  }

  stringstream strtoint(str);
  unsigned long long num = 0;
  strtoint >> num;

  cout << num << endl;

  return 0;
}
