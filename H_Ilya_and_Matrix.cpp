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

ll retrib(vector<ll>&vec,ll n, ll po){
    if(po == 0){
        return vec[n-1];
    }
    ll ans = 0;
    for(int i = n - pow(4, po) ; i < n ; i++){
        ans += vec[i];
    }
    return ans + retrib(vec, n, po-1);
}

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    ll a, b, c, e;
    cin >> a;
    vector<ll>matrix;
    rep(i, a){
        cin >> b;
        matrix.push_back(b);
    }
    sort(matrix.begin(), matrix.end());
    // cout << matrix.size() << endl;
    ll f = a, pk = 1;
    while(f != 1){
        f >>=1;f >>=1;
        pk++;
    }
    // cout << pk << " ";
    cout << retrib(matrix, a, pk-1) << endl;

}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

