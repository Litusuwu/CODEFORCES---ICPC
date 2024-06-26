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
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int SN = 1e6;
const int N = 1e5+5;
bool prime[SN + 1];
bool done[N]{};
li dp[N]{};
 
void SieveOfEratosthenes(int n); 

li DP(int i, vector<li>&possible){
    if(i < 0)return 0;
    if(i <= 1) return possible[i];
    if(done[i])return dp[i];
    done[i]=true;
    return dp[i] = max(DP(i-1, possible) , DP(i-2, possible)+possible[i]*i);
}

void Solve(){
    li n, m, k, l, d, r, ans = 0;
    cin >> n;
    vector<li>possible(N,0);
    rep(i,n){
        cin >> m;
        ans = max(m, ans);
        possible[m]++;
    }
    dp[0]=0;
    dp[1]=possible[1];
   // cout<< ans;
    int c = DP(100000, possible); 
    cout << DP(100000, possible);
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