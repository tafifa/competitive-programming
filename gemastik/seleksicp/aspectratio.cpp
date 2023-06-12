#include <iostream>
#include <numeric>
#include <conio.h>
using namespace std;

int main() {
  int n;
  int w[n], h[n],res[n];
  
  int i = 0;
  while(cin>>w[i]>>h[i]) {
    cin >> w[i] >> h[i];
    res[i] = gcd(w[i],h[i]);
    i++; 
  }

  for (int i = 0; i < n; i++) {
    cout << w[i]/res[i] << ":" << h[i]/res[i] << endl;
  }

  return 0;
}