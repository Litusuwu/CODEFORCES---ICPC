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
    vector<int>frog(n), path(n, INT_MAX);
    rep(i, n)cin >> frog[i];
    path[0] = 0;
    path[1] = abs(frog[1] - frog[0]);
    for(int i = 2 ; i < n ; i++){
        path[i] = min(abs(frog[i] - frog[i-1]) + path[i-1], abs(frog[i] - frog[i-2])+ path[i-2]);    
    } 
    cout << path[n-1] << endl;
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

