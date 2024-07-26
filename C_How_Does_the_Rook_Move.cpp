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
const int N = 300010;
const int M = 1e9 + 7;
bool prime[SN + 1];
//bool done[N][N];
//int dp[N][N];
int f[N];

void SieveOfEratosthenes(int n); 

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n >> k;
    for(int i=1; i<=k; i++){
        int x, y;
        cin >> x >> y;
        n -= (x == y) ? 1 : 2;
    }
    cout << f[n] << endl;
}


int main(){
    Daysi;
    //SieveOfEratosthenes(SN);
    f[0] = f[1] = 1;
	for(int i=2; i<N; i++){
        f[i] = f[i-1] + (2*i - 2) * f[i-2];
        f[i] %= M;
    }
    int time = 1 ;
    cin >> time ;
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