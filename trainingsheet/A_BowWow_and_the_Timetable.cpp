#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string n; cin>>n; //agar mudah mendapatkan nilai length
	string binary="1"; //agar bisa dibandingkan dengan n
	int train=0;
	//tidak perlu mencari desimal dari n
	//biner dari 1=1, 4=100, 16=10000, 64=1000000, 256=100000000, dan seterusnya
	//cukup membandingkan n dengan binary
	//menbandingkan length agar tidak TLE
	//membandingkan binary dengan n, karena misal n(desimal)=256, yg dihitung cmn 1,4,16,64
	while(binary < n && binary.length() <= n.length()){
		train++;
		binary += "00";
	}
	
	cout<<train;
	return 0;
}
