#include <iostream>

using namespace std;

int main() {
  double a,b,c,d;
  cin >> a >> b;
  cin >> c >> d;

  if (a*d == b*c) cout << "sama" << endl;
  if (a*d > b*c) cout << "lebih besar" << endl;
  if (a*d < b*c) cout << "lebih kecil" << endl;

  return 0;
}