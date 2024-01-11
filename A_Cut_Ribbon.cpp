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
const int INFNEG = INT_MIN;
void SieveOfEratosthenes(int n); 

int pieces[3]{};

void Solve(){
    ll n, m, k, l, d, r, ans = 0;
    cin >> n >> pieces[0] >> pieces[1] >> pieces[2];
    vector<ll>dp(4005, INFNEG);
    dp[0]=0;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            int nuevo = i - pieces[j];
            if(nuevo >= 0) dp[i] = max(1 + dp[nuevo], dp[i]);
        }
        //cout << dp[i] << " ";
    }
    cout << endl << dp[n] << endl;
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