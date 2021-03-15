#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int getLargestRectangle(int size,vector<int> &G){
    int maxv = 0;
    stack<pair<int,int>> S;//height,pos
    G[size] = 0;

    for(int i = 0;i <= size;i++){
        pair<int,int> rect;
        rect.first = G[i];
        rect.second = i;

        if(S.empty()) S.push(rect);

        else{
            if(S.top().first < rect.first) S.push(rect);
            else if(S.top().first > rect.first){
                int target = i;
                while (!S.empty() && S.top().first >= rect.first){
                    pair<int,int> pre = S.top();S.pop();
                    int area = pre.first*(i-pre.second);
                    maxv = max(maxv,area);
                    target = pre.second; 
                }
                rect.second = target;
                S.push(rect);
            }
        }
    }
    return maxv;
}

int getLargestRectangle(int h,int w,vector<vector<int>> &G,vector<vector<int>> &T){
    
    for(int j = 0;j < w;j++){
        for(int i = 0;i < h;i++){
            if(G[i][j]) T[i][j] = 0;
            else T[i][j] = (i > 0) ? T[i-1][j]+1:1;
        }
    }

    int maxv = 0;
    for(int i = 0;i < h;i++) maxv = max(maxv,getLargestRectangle(w,T[i]));

    return maxv;
}

int main(void){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> G(h+1,vector<int>(w+1)),T(h+1,vector<int>(w+1));

    rep(i,h) rep(j,w) cin >> G[i][j];

    cout << getLargestRectangle(h,w,G,T) << endl;

    return 0;
}