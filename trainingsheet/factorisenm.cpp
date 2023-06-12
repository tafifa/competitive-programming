#include <iostream>
#include <vector>
using namespace std;

bool isPrime(unsigned long int n) {
  bool result = true;
  vector<bool> is_prime(n+1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
      for (int j = i * i; j <= n; j += i)
        is_prime[j] = false;
    }
  }
  return result = is_prime[n];
}

int main() {
  // int n; cin >> n;
  int t; cin >> t;
  for (int i = 2; i < 100; i++) if (isPrime(i) && isPrime(i+t)) cout << i << endl;
  
}