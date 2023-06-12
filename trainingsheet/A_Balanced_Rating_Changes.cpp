#include <bits/stdc++.h>
using namespace std;



int main(){
	int n; cin >> n;
	int rank[n];
	for (int i=0; i<n; i++){
		cin>>rank[i];
	}
	
	string penentu="ceil turn";
	for (int k=0; k<n; k++){
		//banyaknya bilangan ganjil pasti berjumlah genap
		//untuk setiap bilangan yang ganjil, diceilingkan ke atas dan ke bawah secara bergantian
		
		if((rank[k]%2)!=0){
			float divi = (double) rank[k]/2;
			if(penentu=="ceil turn"){
				rank[k]=ceil(divi); //ceilingkan ke atas
				penentu="floor turn";
			}
			else if(penentu == "floor turn"){
				rank[k]=floor(divi); //ceilingkan ke bawah
				penentu="ceil turn";
			}
			
		}else{
			rank[k]=rank[k]/2;
		}
	}
	
	for (int j=0; j<n; j++){
		cout<<rank[j]<<"\n";
	}
	return 0;
}
