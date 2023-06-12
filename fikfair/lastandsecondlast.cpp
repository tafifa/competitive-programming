#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void stringget(vector<int> n) {
  int siz = n.size();
  vector<int> res;
  int count;
  while(siz > 0) {
    count = 0;
    int min = *min_element(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++) {
      n[i] -= min;
      if (n[i] > 0) count++;
    } res.push_back(count);
  }
}

int main() {
  vector<int> a; int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int temp; cin >> temp;
    a.push_back(temp);
  }
  for (auto i : a) cout << i << ' ';
  stringget(a);
}
