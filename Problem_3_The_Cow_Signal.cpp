#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
#define endl "\n"
typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n >> m >> k;
    vector<vector<char>>matrix(n, vector<char>(m));
    rep(i, n){
        rep(j,m){
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < k * n; i++){
		for(int j = 0; j < k * m; j++){
			cout << matrix[i / k][j / k];
		}
		cout << endl;
	}
}


int main(){
    fastio;
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

