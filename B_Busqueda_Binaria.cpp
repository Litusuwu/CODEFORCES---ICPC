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
    vector<int>v(n);
    rep(i, n){
        cin >> v[i];
    }    
    while(m--){
        cin >> k;
        l = 0;
        r = n-1;
        while(l<r){
            d = (l+r)/2;
            //1 3 4 5 5 6 7 8 8 17
            if(v[d] < k){
                l = d + 1;
            }
            else{
                r = d;
            }
        }

        cout << (v[l]==k? l: -1) << endl;
    } 
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

