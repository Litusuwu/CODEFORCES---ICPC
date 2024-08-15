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
    vector<int>cut(4005, INT_MIN), piz;
    piz.push_back(m);piz.push_back(k);piz.push_back(l);
    cut[0]=0;
    for(int i = 1; i <= n ; i++){
        for(int j = 0 ; j < 3; j++){
            if(i - piz[j] >= 0) cut[i] = max(cut[i-piz[j]] + 1, cut[i]);
        }
    }
    cout << cut[n] << endl;
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

