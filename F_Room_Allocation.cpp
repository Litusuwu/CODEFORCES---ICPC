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
    priority_queue<pair<pair<int,int>, int>, vector<pair<pair<int,int>, int>>, greater<pair<pair<int,int>, int>>> cola;
    
    vector<pair<pair<int, int>, int>>cuartos;
    int index = 1;
    cin >> n;
    vector<int>piezas(n);
    rep(i, n){
        cin >> r >> d;
        cuartos.push_back({{r, d}, i});
    }
    sort(cuartos.begin(), cuartos.end());
    rep(i,n){
        m = cuartos[i].first.first;
        k = cuartos[i].first.second;
        r = cuartos[i].second;
        if(cola.empty()){
            ans++;
        }
        else if(cola.top().first.first < m){
            index = cola.top().second;
            cola.pop();
        }
        else{
            ans++;
            index = ans;
        }
        cola.push({{k, m}, index});
        piezas[r] = index;
    }
    cout << ans << endl;
    for(auto it : piezas){
        cout << it << " ";
    }
    cout << endl;
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