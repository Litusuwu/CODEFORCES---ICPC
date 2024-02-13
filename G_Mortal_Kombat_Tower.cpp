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
const li N = 200010;
bool prime[SN + 1];


vector<li> dpe1(N, 1e9), dpe2(N, 1e9);
 
void SieveOfEratosthenes(int n); 

<<<<<<< Updated upstream
=======
int DP(int n, vector<int>&levels){
    if(n < 0)return 0;
    if(n <= 1){
        if(levels[n]==0)return 1;
    }
    if(done[n])return dp[n];
    done[n]=true;
    return dp[n] = 
}

>>>>>>> Stashed changes
void Solve(){
    li n, m, k, l, d, r, ans = 0;
    cin >> n;
    vector<int>numeros(n+1);

    REP(i, 1, n+1)cin >> numeros[i];
    
    dpe1[1]=numeros[1];
    dpe1[2]=numeros[1]+numeros[2];
    dpe2[2]=numeros[1];

    REP(i, 3, n+1){
        dpe1[i]=min(dpe2[i-1]+numeros[i], dpe2[i-2]+numeros[i]+numeros[i-1]);
        dpe2[i]=min(dpe1[i-1], dpe1[i-2]);
    }
    li val = min(dpe1[n], dpe2[n]);

    cout << val<<endl;
}


int main(){
    Daysi;
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