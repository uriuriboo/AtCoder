#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i,k,n) for(int i = k;i < (n);i++)
typedef long long ll;
typedef pair <int,int> P;
typedef vector<vector<int>> Graph;
const ll MOD = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

template <class T>
inline T LCM(T a, T b) {
	 return (a * b) / GCD(a, b);
}
template <class T>
inline bool chmin(T &a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}

template <class T>
inline bool chmax(T &a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

template <class T>
T GCD(T a, T b) {
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

template <class T>
T nCr_naive(T n, int r) {
	T ret(1);
	for (int i = 0; i < r; i++) {
		ret *= n;
		ret /= T(i + 1);
		n -= T(1);
	}
	return ret;
}

int main(void){

	int n,m,ans = 0;
	cin >> n >> m;

	rep(i, m){

	}

	return 0;
}