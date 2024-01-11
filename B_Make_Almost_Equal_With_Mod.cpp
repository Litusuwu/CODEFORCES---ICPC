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
const int N = 100000;
bool es_primo[N+1]{};

void Solve(){
    ll n, m, k, l, d, ans=0;
    bool par=false, impar=false;
    cin >> n;
    ll arr[n]{};
    rep(i,n){
        cin >> arr[i];
        if(arr[i]%2==0){
            par=true;
            d = arr[i];
        }
        else{
            impar = true;
            l = arr[i];
        } 
    }
    if(par==true and impar==true){
        cout<<"2"<<endl;
        return;
    }
    else if (par){
        ans = arr[0];
        int count = 0;
        REP(i,1, n){
            if(gcd(ans, arr[i])!=2)ans = gcd(ans, arr[i]);
        }
    }
   
}

int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}