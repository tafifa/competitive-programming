#include <iostream>
using namespace std;

int main() {
  int x, y;
  int m;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> m;
      if (m != 0) {
        x = j; y = i;
      }
    }
  }
  cout << (2-x)*((2*(2-x)+1)%2) + (2-y)*((2*(2-y)+1)%2) << endl;

  return 0;
}