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
int arr[3]{};

vector<int> memo(4005, -1000000);
// vector<int> dpi(4005);

void SieveOfEratosthenes(int n); 
int dp(int n){
    if(n == 0)return 0;
    if(memo[n]!= -1000000)return memo[n];

    rep(i, 3){
        int ch = n - arr[i];
        if(ch >= 0){
            memo[n] = max(memo[n], 1 + dp(ch));
        }
    }
    return memo[n];
}
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    memo[0]=0;
    // k = dp(n);
    cout<<dp(n);

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