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
    int c1=0,c2=0 ,Ali=0, Bob=0;
    cin >> n;
    vector<int>candy(n);
    map<int, int>cant;
    rep(i, n){
        cin >> candy[i];
        if(candy[i]==2)c2++;
        else c1++;
        // cant[candy[i]]++;
        ans+=candy[i];
    }
    if(ans&1)cout<<"NO";
    else{
        while (c2>0){
            if(Ali>Bob)Bob+=2;
            else Ali+=2;
            c2--;
        }
        if(Ali!=Bob and c1>=2 and !(c1&1)){
            cout<<"YES";
        }
        else if (Ali==Bob and !(c1&1)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
        
    } 
    cout<< endl;

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