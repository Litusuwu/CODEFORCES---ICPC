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
vector<int>policarp;
void SieveOfEratosthenes(int n); 
void Policarp(int n){
    REP(i,1,n){
        if(not(i%3 == 0 or (i>10 and (i%10)==3)))policarp.push_back(i);
    }
}
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n;
    cout << policarp[n-1]<< endl;
}
int main(){
    Daysi;
    //SieveOfEratosthenes(SN);
    Policarp(2000);
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