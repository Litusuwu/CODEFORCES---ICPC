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
    cin >> n >> m >> k >> l;    
    cout <<  min(abs(m-n), min(abs(n - k) + abs(l - m), abs(n - l) + abs(m - k))) << endl;
    //cout << ((abs(m - n) >= (abs(n-entryT) + abs(m-minimunT)))? abs(n-entryT) + abs(m-minimunT) : abs(m-n)) << endl;
}


int main(){
    fastio;
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

