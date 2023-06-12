#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) {
	// Complete this function
    vector <string> strarr;
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == ',') {
          strarr.push_back(temp);
          temp = "";
          i += 1;
      }
      temp += str[i];
      if (i == str.size()-1) strarr.push_back(temp);
    }
    return strarr;
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}