#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;

  string s; getline(cin, s);

  bool con = true;

  for(int i = 0; i < s.length(); i++){
    if( !std::isalpha(s[i]) && !std::isdigit(s[i]) )
      con = false;
  }

  reverse(s.begin(), s.end());
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  
  if (con) {
    cout << s << '\n';
  }

  else cout << "Emor tidak beruntung :(" << '\n';

  return 0;
}