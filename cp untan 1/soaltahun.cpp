#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fung(ll n){
  if(n==1){
    return 2010;
  }else if(n==2){
    return 2012;
  }
}

int main(){
  ll n; cin>>n;
  cout<<fung(n);
  return 0;
}