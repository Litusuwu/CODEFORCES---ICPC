#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
 
typedef long double ld;
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int SN = 1e6;
const int N = 3e3;
bool prime[SN + 1];

const int maxi = 100005;
vector<ll>wt(103), v(103);
ll dp[103][100005]{};

 
void SieveOfEratosthenes(int n); 

ll DP(ll i, ll j){
    if(j == 0)return 0;
    if(i < 0) return 1e15;
    if(dp[i][j]!=-1)return dp[i][j];

    ll ans = DP(i-1, j);
    if((j - v[i] )>= 0){
        
        ans = min(ans, DP(i-1, j-v[i])+wt[i]);
        //cout<<ans;
    }
    return dp[i][j]=ans;
}
void Solve(){
    ll n, m, k, l, d, r, w, ans = 0;
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    rep(i, n) cin >> wt[i] >> v[i];
    //cout<<w;

    for(int i=100005; i >=0; i--){
        if(DP(n-1, i)<=w){
            cout<<i<<endl;
            break;
        }
    }
}


int main(){
    Daysi;
    //SieveOfEratosthenes(SN);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

void SieveOfEratosthenes(int n) {  
    memset(prime, true, sizeof(prime)); 
    for (int p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
}