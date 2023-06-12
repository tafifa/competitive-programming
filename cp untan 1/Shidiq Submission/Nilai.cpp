#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define endl '\n'

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}

int main() {
    fastio
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    vector<pair<char, int>> vp;
    if (s1[2] == '>') {
        vp.push_back(make_pair(s1[0], 2));
        vp.push_back(make_pair(s1[4], 1));

        if (s2[0] == s1[0] && s2[2] == '>') {
            vp.push_back(make_pair(s2[4], vp[0].second - 1));
        }
        if (s2[0] == s1[0] && s2[2] == '<') {
            vp.push_back(make_pair(s2[4], vp[0].second + 1));
        }

        if (s2[4] == s1[0] && s2[2] == '>') {
            vp.push_back(make_pair(s2[0], vp[0].second + 1));
        }
        if (s2[4] == s1[0] && s2[2] == '<') {
            vp.push_back(make_pair(s2[0], vp[0].second - 1));
        } 
        
        if (s2[0] == s1[4] && s2[2] == '>') {
            vp.push_back(make_pair(s2[4], vp[1].second - 1));
        }
        if (s2[0] == s1[4] && s2[2] == '<') {
            vp.push_back(make_pair(s2[4], vp[1].second + 1));
        } 

        if (s2[4] == s1[4] && s2[2] == '>') {
            vp.push_back(make_pair(s2[0], vp[1].second + 1));
        }
        if (s2[4] == s1[4] && s2[2] == '<') {
            vp.push_back(make_pair(s2[0], vp[1].second - 1));
        } 
    } 

    if (s1[2] == '<') {
        vp.push_back(make_pair(s1[0], 1));
        vp.push_back(make_pair(s1[4], 2));

        if (s2[0] == s1[0] && s2[2] == '>') {
            vp.push_back(make_pair(s2[4], vp[0].second - 1));
        }
        if (s2[0] == s1[0] && s2[2] == '<') {
            vp.push_back(make_pair(s2[4], vp[0].second + 1));
        }

        if (s2[4] == s1[0] && s2[2] == '>') {
            vp.push_back(make_pair(s2[0], vp[0].second + 1));
        }
        if (s2[4] == s1[0] && s2[2] == '<') {
            vp.push_back(make_pair(s2[0], vp[0].second - 1));
        } 
        
        if (s2[0] == s1[4] && s2[2] == '>') {
            vp.push_back(make_pair(s2[4], vp[1].second - 1));
        }
        if (s2[0] == s1[4] && s2[2] == '<') {
            vp.push_back(make_pair(s2[4], vp[1].second + 1));
        } 

        if (s2[4] == s1[4] && s2[2] == '>') {
            vp.push_back(make_pair(s2[0], vp[1].second + 1));
        }
        if (s2[4] == s1[4] && s2[2] == '<') {
            vp.push_back(make_pair(s2[0], vp[1].second - 1));
        } 

    } 

    sort(vp.begin(), vp.end(), sortbysec);

    for (int i = 0; i < vp.size(); i++) {   
        if (i == vp.size()-1) cout << vp[i].first;
        else cout << vp[i].first << " ";
    }
    return 0;
}