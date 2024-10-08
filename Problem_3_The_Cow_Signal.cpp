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
    vector<vector<char>>matrix(m, vector<char>(n));
    rep(i, m){
        rep(j,n){
            cin >> matrix[i][j];
        }
    }
    // cout << x << " " << y ;
    for(int i = 0 ; i < m ; i++){
        for(int x = 0 ; x < k ; x++){
            for(int j = 0 ; j < n; j++){
                for(int y = 0 ; y < k ; y++){
                    cout << matrix[i][j];
                }
            }
            cout << endl;
        }
    }
}


int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

