#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  // Set B
  // int n; cin >> n;
  // int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
  // for (int i = 0; i < n; i++) {
  //   if (a[i] < 2) {
  //     cout << "BUKAN" << '\n'; continue; 
  //   }
    
  //   for (int j = 2; j*j <= a[i]; j++) {
  //     if (a[i] % j == 0) {
  //       cout << "BUKAN" << '\n'; goto cont;
  //     }
  //   } 
    
  //   cout << "YA" << '\n';

  //   cont: continue;
  // }

  // Set C
  int n; cin >> n;
  int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++) {
    int count = 0;
    
    for (int j = 2; j*j <= a[i]; j++) {
      if (a[i] % j == 0) {
        count++;
        if (count >= 2) {
          cout << "BUKAN" << '\n'; 
          goto cont;
        }
      }
    } 
    cout << "YA" << '\n';

    cont: continue;
  }

  return 0;
}