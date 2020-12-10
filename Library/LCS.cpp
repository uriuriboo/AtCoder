#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)


int lcs(string A,string B){
    int a = A.size(),b = B.size();
    vector<vector<int>> dp(a+1,vector<int>(b+1,0));
    rep(i,a){
        rep(j,b){
            if(A[i] == B[j]){
                dp[i+1][j+1] =dp[i][j]+1;
            }
            else{
                dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[a][b];
}
