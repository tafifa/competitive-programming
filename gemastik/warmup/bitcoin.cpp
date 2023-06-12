#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int findIdx(vector<int> v, int K) {
  vector<int>::iterator i = find(v.begin(), v.end(), K);
	int idx = distance(v.begin(), i);

  return idx;
}

int main() {
  int n; cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int temp; cin >> temp;
    v.push_back(temp);
  }

  int prf = 0, idx = 0;
  int tmin = INT_MAX, tmax = INT_MIN;

  for (int i = 0; i < n; i++) {
    tmin = *min_element(v.begin(), v.end()); 
    idx = findIdx(v, tmin);
    v.erase(v.begin(),v.begin()+idx);

    tmax = *max_element(v.begin(), v.end());
    idx = findIdx(v, tmax);
    v.erase(v.begin(),v.begin()+idx);
    cout << tmin << ' ' << tmax << endl;

    prf += abs(tmin - tmax);
    if (tmax == tmin) break;
  }

  cout << prf << endl;

  return 0;
}