#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
  int n,q;
  cin >> n;

  int P[n];
  for (int i = 0; i < n; i++) {
    cin >> P[i];
  }
  
  cin >> q;
  int L[q], R[q];
  for (int i = 0; i < q; i++) {
    cin >> L[i] >> R[i];
  }
  
  sort(P, P+n);
  // for (int i = 0; i < n; i++) {
  //   cout << P[i] << " ";
  // }
  // cout << endl;
  // for (int i = 0; i < q; i++) {
  //   cout << L[i] << " " << R[i] << " ";
  // }
  // cout << endl;

  // fi = swap(pi, pn-i+1)
  // L R, fi dari L ke R

  // DEBUG
  cout << "here";
  int temp1 = 0;
  int temp2 = 0;

  for (int i = 0; i < q; i++) {
    //cout << "here2";
    for (int j = L[i]; j <= R[i]; j++) {
      temp1 = P[j];
      temp2 = P[n-j+1];
      cout << temp1 << " " << temp2 << endl;
      P[j] = temp2;
      P[n-j+1] = temp1;
      cout << P[j] << " " << P[n-j+1] << endl;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << P[i] << " ";
  }

}