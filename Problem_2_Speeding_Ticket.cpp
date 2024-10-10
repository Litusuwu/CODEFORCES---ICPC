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
    cin >> n >> m;
    vector<pair<int,int>>limit, bessie;
    rep(i, n){
        cin >> k >> l;
        limit.push_back({k, l});
    }
    rep(i, m){
        cin >> k >> l;
        bessie.push_back({k, l});
    }
    int rd1 = bessie[0].first, rd2 =limit[0].first, i1 = 0, i2 = 0;
    
    for(int i = 1 ; i <= 100  ; i++ ){
        if(rd1 < i)rd1 += bessie[++i1].first;
        if(rd2 < i)rd2 += limit[++i2].first;

        if(bessie[i1].second > limit[i2].second)ans=max(ans, bessie[i1].second - limit[i2].second);    
    }
    cout << ans << endl;

}


int main(){
    fastio;
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

