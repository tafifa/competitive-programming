#include <iostream>
using namespace std;

int main() {
  int t,x,y;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> t;
      if (t == 1) {
        x = i+1; y = j+1;
      }
    }
  }
  cout << abs(3-x) + abs(3-y) << '\n';

  return 0;
}