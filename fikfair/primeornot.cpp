#include <bits/stdc++.h>
using namespace std;
  
int dp[10001][10001];

bool check(string str, int i, int j) {
  if (i > j) return 1;
  if (dp[i][j] != -1) return dp[i][j];
  if (str[i] != str[j]) return dp[i][j] = 0;

  return dp[i][j] = check(str, i + 1, j - 1); 
}
  
int countSubstrings(string str) {
  memset(dp, -1, sizeof(dp));
  int n = str.length();
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (check(str, i, j))
        cnt++;
    }
  }
  return cnt;
}