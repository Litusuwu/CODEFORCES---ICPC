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
    int n, m, k, l, d, r;
    map<string, ll>locura;
    cin >> n >> m;
    ll g, ans = 0;
    string s;
    rep(z, n){
        
        cin >> s >> g;
        locura[s]+=g;
    }
    vector<ll>ahorro;
    for(auto it : locura){
        ahorro.push_back(it.second);
    }
    sort(ahorro.begin(), ahorro.end());
    int index = ahorro.size()-1;
    rep(i, m){
        if(index < 0)break;
        ans += ahorro[index];
        index--;
    }
    cout << ans << endl;
}


int main(){
    fastio;
    int time = 1 ;
    // cin >> time ;
    while(time--)Solve();
    return 0;
}

