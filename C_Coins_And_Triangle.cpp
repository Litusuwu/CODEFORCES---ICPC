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
ll val(ll med){
    ll ans=(med*(med+1))/2;
    return ans;
}
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n;
    // vector<int>v(n);
    l = 1;
    r = n;

    while(l <= r){
        ll med = (l+r)/2;
        // 1 2 3 4 5 6 7
        ll value = val(med);
        if(value <= n){
            l = med + 1;
        }
        else{
            r = med - 1;
        }
        // cout << r << " ";
    }
    cout << r << endl;
}


int main(){
    fastio;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}

