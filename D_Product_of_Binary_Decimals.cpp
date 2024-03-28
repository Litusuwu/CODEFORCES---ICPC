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
const int N = 3e3;
bool prime[SN + 1];
bool done[N][N];
int dp[N][N];
set<int>numeros;
vector<int>numerosBin;
vector<string>numerosString;
void SieveOfEratosthenes(int n); 

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    
    bool flag = true;
    cin >> n;
    auto it = numeros.find(n);
    if(it!=numeros.end())cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}


int main(){
    Daysi;
    //SieveOfEratosthenes(SN);
    int time = 1 ;
    rep(i, 32) {
        numerosString.push_back(bitset<5>(i).to_string());
    }
     
    rep(i, 32) {
        numerosBin.push_back(stoi(numerosString[i]));
    }
    rep(i, 32){
        rep(j, 32){
            rep(k, 32){
                rep(z, 32){
                    numeros.insert(numerosBin[i]*numerosBin[j]*numerosBin[k]*numerosBin[z]);
                }
            }
        }
    }
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