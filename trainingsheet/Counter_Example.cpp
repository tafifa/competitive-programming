//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long kiri, kanan;
	cin>> kiri>>kanan;
	long long range = kanan - (kiri - 1);
	if(range < 3 || (kiri%2==1 && range < 4)){
		cout<<-1;
	}else{
		if(kiri%2==0){
			cout<<kiri<<" "<<kiri+1<<" "<<kiri+2;
		}else{
			cout<<kiri+1<<" "<<kiri+2<<" "<<kiri+3;
		}
	}
}
