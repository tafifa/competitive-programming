#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
	fastIO;
	
	string s; cin >> s;
	
	vector<char> vec;
	vec.push_back(s[0]);
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '+') {
			vec.push_back(s[i+1]);
		}
	}
	
	sort(vec.begin(), vec.end()); 
	
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		if (it != vec.begin()) cout << '+';
		cout << *it;
	}
	
	return 0;
}