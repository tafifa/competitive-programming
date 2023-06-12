#include <iostream>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;
  
  int n; cin >> n;

  string a[n]; 
  for (int i = 0; i < n; i++) cin >> a[i];
  
  for (int i = 0; i < n; i++) {
    string *p = &a[i];
    string t = *p;
    for (int i = 0; i < t.length()-1; i++) {
      if(t[i] == ' ') {
        
      }
    }
  }

  return 0;
}