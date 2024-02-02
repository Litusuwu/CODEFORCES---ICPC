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
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int SN = 1e6;
const int N = 3e3;
bool prime[SN + 1];
bool done[N][N]{};
int dp[N][N]{};
int cost[][3]= { { 1, 2, 3 }, { 4, 8, 2 }, { 1, 5, 3 } };
 
void SieveOfEratosthenes(int n); 
int DP(int i, int j){
    if(j < 0 or i < 0 or i >= 3 or j >= 3) return INT_MAX;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i == 2 and j == 2 ) return cost[i][j];
    return dp[i][j] = cost[i][j] + min(DP(i+1,j), min(DP(i,j+1),DP(i+1,j+1)));
}
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    rep(i, N){
        rep(j, N){
            dp[i][j]=-1;
        }
    }
    cout << DP(0, 0);
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