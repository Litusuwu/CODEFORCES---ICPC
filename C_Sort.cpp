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
    string s1, s2;
    char b;
    cin >> n >> m;
    vector<vector<int>>arr1(n+1, vector<int>(26, 0)), arr2(n+1, vector<int>(26, 0));
    
    for(int i = 1 ; i <= n ; i ++){
        cin >> b;
        arr1[i][b-'a']++;
        rep(j, 26){
            arr1[i][j] += arr1[i-1][j]; 
        }

    }
    for(int i = 1 ; i <= n ; i ++){
        cin >> b;
        arr2[i][b-'a']++;
        rep(j, 26){
            arr2[i][j] += arr2[i-1][j]; 
        }
    }
    

    while(m--){
        cin >> l >> r;
        int a = 0 , b = 0;
        ans = 0;
        for(int i = 0 ; i < 26 ; i++){
            a = arr1[r][i] - arr1[l-1][i];
            b = arr2[r][i] - arr2[l-1][i];
            ans += abs(b - a);
        }
        cout << ans/2 << endl;
    }

    
}


int main(){
    fastio;
    //SieveOfEratosthenes(SN);
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