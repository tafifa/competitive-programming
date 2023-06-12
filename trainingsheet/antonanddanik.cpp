#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  string S; cin >> S;
  
  int D = count(S.begin(), S.end(), 'D');
  int A = N - D;

  cout << (A == D ? "Friendship" : (A > D) ? "Anton" : "Danik") << endl;

  return 0;
}