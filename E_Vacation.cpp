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
    cin >> n;
    vector<vector<int>>alumnos(n, vector<int>(3)), dp(n + 1, vector<int>(3, INT_MIN));
    
    
    rep(i, n){
        rep(j, 3){
            cin >> alumnos[i][j];
        }
    }
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            int maxim = INT_MIN;
            rep(z, 3){
                if(z == j) continue;
                maxim = max(dp[i-1][z], maxim);
                // cout << maxim << " <> " << i-1;
            }
            dp[i][j] = max(dp[i][j], maxim  + alumnos[i-1][j]);
            // cout << endl;
        }
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) <<endl;
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

