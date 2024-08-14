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

    vector<int>vec(n);

    rep(i, n){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cin >> m;
    rep(i, m){
        cin >> k;
        l = 0, r = n-1;
        int med = 0;
        bool flag = false;
        while(l <= r){
            med = l + (r-l)/2;
            int val = vec[med];
            if(vec[med] > k){
                r = med - 1;
            }
            else{
                l = med + 1;
            }
        }
        cout <<(l < n?  l : n) << endl;
    }
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

