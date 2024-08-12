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
    string s;
    cin >> s;
    int palabra = 0;
    rep(i, s.length()){
        // cout << palabra << endl;
        if(palabra==5){
            cout << "YES" << endl;
            return;
        }
        else if(palabra == 1 and s[i] == 'h' or
                palabra == 2 and s[i] == 'e' or
                palabra == 4 and s[i] == 'l' )continue;
        if(s[i] == 'h' and palabra == 0){
            palabra++;
        }
        else if(s[i] == 'e' and palabra == 1){
            palabra++;
        }
        else if(s[i] == 'l' and palabra == 2){
            palabra++;
        }
        else if(s[i] == 'l' and palabra == 3){
            palabra++;
        }
        else if(s[i] == 'o' and palabra == 4){
            palabra++;
            
        }
        
    }
    if(palabra==5){
        cout << "YES" << endl;
        return;
    }   
    cout << "NO" << endl;
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