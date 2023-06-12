#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fastIO;
  
	int n; cin>>n;
	int himp[n];
	for(int i=0; i<n; i++){
		cin>>himp[i];
	}
	int q; cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		
		int gcdd[n];
		vector <int> daftargcd;
		for(l; l<=r; l++){
			
			for(int i=0; i<n; i++){
				gcdd[i] = himp[i] + l;
			}
			/*
			for(int i=0; i<n; i++){
				cout<<gcdd[i]<<" ";
			}
			cout<<"\n";
			*/
			int hasil_gcdnya = gcdd[0];
			for(int i=1; i<n; i++){
				hasil_gcdnya = __gcd(gcdd[i], hasil_gcdnya);
			}
			daftargcd.push_back(hasil_gcdnya);
		}
		cout<<*max_element(daftargcd.begin(), daftargcd.end());
		
	}
	return 0;
}