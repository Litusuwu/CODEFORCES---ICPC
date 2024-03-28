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
 
void SieveOfEratosthenes(int n); 

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    char hr1[2], hr2[2];
    string ostra;
    cin >> hr1[0] >> hr1[1];
    cin.get();
    cin >> hr2[0] >> hr2[1];

    int hora1 = (hr1[0]- '0')*10 + (hr1[1] - '0');
    
    int hora2 = (hr2[0]- '0')*10 + (hr2[1] - '0');

    if(hora1 >= 12){
        ostra = "PM";
        if(hora1>=13)hora1-=12;
    } 
    else{
        if(hora1==0)hora1=12;
        ostra = "AM";        
    } 
    cout<<setw(2)<<setfill('0')<<hora1<<":"<<setw(2)<<hora2<<" "<<ostra<<endl;

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