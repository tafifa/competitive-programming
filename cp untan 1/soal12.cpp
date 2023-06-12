#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
template <typename T>
void remove(vector<T>& v, size_t index){
  v.erase(v.begin() + index);
}
int main(){
  fastIO;

  int n, k; cin >> n >> k;
  vector <string> v;
  for(int i=0; i<n+1; i++){
    string c; 
    getline(cin, c);
    v.push_back(c);
  }
  
  int inde[k+1];
  for(int i=1; i<=k; i++){
    cin>>inde[i];
  }
  for(int i=1; i<=k; i++){
    cout<<v[inde[i]]<<"\n";
    remove(v, inde[i]);
  }
  

  return 0;
}