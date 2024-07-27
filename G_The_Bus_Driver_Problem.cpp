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

typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int SN = 1e6;
const int N = 3e3;
bool prime[SN + 1];
bool done[N][N];
int dp[N][N];
 
void SieveOfEratosthenes(int n); 

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    while(true){
        cin >> n >> m >> k;
        vector<int>mor,aft;
        if(n ==0 && m==0  && k==0 )break;

        for(int i = 0 ; i < n ; i++){
            cin >> l;
            mor.push_back(l);
        }
        
        for(int i = 0 ; i < n ; i++){
            cin >> l;
            aft.push_back(l);
        }

        sort(mor.begin(), mor.end());
        sort(aft.begin(), aft.end());

        for(int i = 0 ; i < n ; i++){
            int d = mor[i] + aft[n-1-i];
            if(d > m){
                ans += (d - m) * k;
            }
        }
        
        cout << ans << endl;
        ans = 0;
    }
}


int main(){
    fastio;
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