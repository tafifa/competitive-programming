#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll vanish_zero(ll n){
	ll wz=0, tn=1;
	while (n!=0){
		ll d;
		d = n % 10;
		n = n / 10;
		if (d!=0){
			wz = wz + d*tn;
			tn = tn * 10;
		}
	}
	return wz;
}

int main(){
	ll a,b,c;
	cin>> a;
	cin>> b;
	c = a + b;
	ll A = vanish_zero(a);
	ll B = vanish_zero(b);
	ll C = vanish_zero(c);
	cout << (A + B == C ? "YES" : "NO")<<"\n";
	return 0;
}
