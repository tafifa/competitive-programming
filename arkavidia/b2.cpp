#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n; cin>>n;
	vector<int> s;
	for(int i=0; i<n; i++){
		int z, b;
		cin>>z>>b;
		s.push_back(z);
	}
	sort(s.begin(), s.end());
	int count=1;
	vector<int> utkcoun;
	for(int i=0; i<s.size()-1; i++){
		if(s[i]==s[i+1]){
			count++;
		} if(s[i]!=s[i+1] && count>1 || (s[i]==s[i+1]) && i==(s.size() - 2)) {
			utkcoun.push_back(count);
			count=1;
		}
	}
	//cari kombinasi
	ll comdaridupli = 0;
	for(int i=0; i<utkcoun.size(); i++){
		comdaridupli =(ll) comdaridupli + (utkcoun[i]*(utkcoun[i] - 1))/2;
		//cout<<utkcoun[i]<<" "<<"\n";
	}
	//cout<<utkcoun.size()<<"\n";
	/*
	for(int i=0; i<utkcoun.size(); i++){
		cout<<utkcoun[i]<<" "<<"\n";
	}
	*/
	int N = s.size();
	ll com = (ll) (N*(N - 1))/2;
	ll comfinal = (ll) com - comdaridupli;
	cout<<comfinal;
	return 0;
}