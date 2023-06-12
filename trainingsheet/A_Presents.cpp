#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, b, present[101];
	cin>>n;
	for (int i=1; i<=n; i++){
		cin>>b;
		present[b]=i;
	}
	for (int i=1; i<=n; i++){
		cout<<present[i]<<" ";
	}
}
