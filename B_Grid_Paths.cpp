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
bool prime[SN + 1];
ll MODULO = 1e9 + 7;
void SieveOfEratosthenes(int n); 

void Solve(){
    ll n, m, k, l, d, r, ans = 0;
    char b;
    cin >> n;
    char matrix[n+1][n+1]{};
    rep(i, n){
        rep(j, n){
            cin >> matrix[i][j];
        }
    }
    ll dp[n+1][n+1]{};
    dp[0][0]=(matrix[0][0] == '*' ? 0 : 1);
    rep(i, n){
        rep(j, n){
            if(matrix[i][j]!='*'){
                if(i-1 >= 0 and matrix[i-1][j] != '*'){
                    dp[i][j] += dp[i-1][j] % MODULO;
                }
                if(j-1 >= 0 and matrix[i][j-1] != '*'){
                    dp[i][j] += dp[i][j-1] % MODULO;
                }
            }
        }
    }
    cout << dp[n-1][n-1] % MODULO;

    

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