#include <iostream>
using namespace std;

int main(){
	int x, y; 
	cin >> x >> y;
	int n; cin >> n;
	int xi[n], yi[n];
	for(int i = 0; i<n; i++) cin >> xi[i] >> yi[i];
	}
	int q; 
	cin>>q;
	int jenisbom[q];
	int banyaknyakena[q];
	memset(banyaknyakena, 0, sizeof(banyaknyakena));
	
	for(int i=0; i<q; i++){
		cin>>jenisbom[i];
		
		for(int j=0; j<n; j++){
			//kalo pusatnya 0,0
			if(x==0 && y==0){
				int perskiri = (xi[j]*xi[j]) + (yi[j] * yi[j]);
				int perkanan = jenisbom[i] * jenisbom[i];
				if(perskiri <= perkanan ){
					banyaknyakena[i] += 1;
				}
			//kalo pusatnya bukan 0,0	
			}else{
				int perskiri = ((xi[j] - x) * (xi[j] - x))+((yi[j] - y) * (yi[j] - y));
				int perkanan = jenisbom[i] * jenisbom[i];
				//cout<<perskiri<<" "<<perkanan<<"\n";
				if(perskiri <= perkanan ){
					banyaknyakena[i] += 1;
				}
			}
		}
		
	}
	
	
	
	for(int i=0; i<q; i++){
		cout<<banyaknyakena[i]<<"\n";
	}
	
	
	
	
	return 0;
}
