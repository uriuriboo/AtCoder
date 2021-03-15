#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool isPrime(int x){
    int i ;
    if(x < 2) return 0;
    else if(x == 2) return true;
    if(x%2 == 0) return false;
    for(int i = 3;i*i <= x;i+=2){
        if(x%i == 0) return false;
    }
    return true;
}

vector<bool> eratos(int n){
    vector<bool> isprime(n+1,true);
    isprime[0] = isprime[1] = false;
    for(int i = 2;i*i <= n;i++){
        if(isprime[i]){
            int j = i+i;
            while(j <= n){
                isprime[j] = false;
                j += i;
            }
        }
    }
    return isprime;
}

int main(void){
    int n,ans = 0;
    cin >> n;

    rep(i,n){
        int x;
        cin >> x;
        if(isPrime(x)) ans++;
    }
    
    cout << ans << endl;

    return 0;
}
