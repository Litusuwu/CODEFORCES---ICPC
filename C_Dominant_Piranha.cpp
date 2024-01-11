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
    bool flag = false;
    cin >> n;
    vector<pii>pirañas(n);
    set<int>elem;
    rep(i, n){
        cin >> m;pirañas[i].F = m; pirañas[i].S = i+1;
        elem.insert(m);
        if(i > 0)if(m != pirañas[i-1].F)flag = true;
    }
    if(not flag){cout<<"-1"<<endl;return;}

    vector<pii>pirañas2 = pirañas;
    sort(pirañas2.begin(), pirañas2.end());
    int maximun = *max_element(elem.begin(), elem.end());
    if(pirañas[0].F == maximun and pirañas[1].F!=maximun){
        cout << pirañas[0].S << endl;
        return;
    }
    REP(i,1,n){    
        if(pirañas[i].F == maximun and (pirañas[i-1].F!=maximun or pirañas[i+1].F != maximun)){
            cout << pirañas[i].S <<endl;
            return;
        }
    }
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