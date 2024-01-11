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
 
void SieveOfEratosthenes(int n); 

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n;
    int matrix[3][n+2]{};
    int dp[3][n+2]{};
    for(int i = 1 ; i <= n ; i++){
        cin >> matrix[0][i] >> matrix[1][i] >> matrix[2][i];
    }
    dp[0][0] = 0;dp[1][0] = 0;dp[2][0] = 0;
    
    for(int i = 1 ; i <= n ; i++){
        
        dp[0][i] = matrix[0][i] + max(dp[1][i-1], dp[2][i-1]);
        dp[1][i] = matrix[1][i] + max(dp[0][i-1], dp[2][i-1]);
        dp[2][i] = matrix[2][i] + max(dp[1][i-1], dp[0][i-1]);  
        
    }
    cout << max(max(dp[0][n], dp[1][n]), dp[2][n]);
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