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
    vector<ll>vec(n+1),sum(n+1, 0);
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }
    for(int i = 1 ; i <= n ; i++ ){
        sum[i] = sum[i-1] + vec[i-1]; 
    } 
    // for(auto it : sum){
    //     //   1 2 1 1 2 2 1
    //     // 0 1 3 4 5 7 9 10 
    //     cout << it << " ";
    // }
    r = 0, l = n;
    for(int i = n-1; i > n; i--){
        if(sum[l] - sum[i] < sum[i] - sum[i])
    }
}


int main(){
    fastio;
    int time = 1 ;
    // cin >> time ;
    while(time--)Solve();
    return 0;
}

