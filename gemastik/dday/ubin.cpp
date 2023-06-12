#include <iostream>
using namespace std;
 
int ubin(int n)
{
    if (n <= 2)
      return n;
 
    return ubin(n-1) + 1;
}

int main()
{ 
  int n; cin >> n;
  cout << ubin(n) << '\n';
  return 0;
}