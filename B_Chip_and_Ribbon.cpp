#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(int i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(int i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(int i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(int i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(int i = k; i > n ; i--)
#define bucleR2(i, k, n) for(int i = k; i >= n ; i--)
typedef long long ll;

void Solve(){
    ll n, ans=0;
    cin >> n;
    vector<ll>places(n), init(n, 0);
    bucle(i, n)cin>>places[i];
    bucle(i, n){
        init[i]++;
        if(i==n-1){
            if(init[i]!=places[i]){
                ans+=places[i]-init[i];
                init[i]=places[i]-init[i];
            }
        }
        else{
            if(places[i]>places[i+1]){
                ans+=places[i]-places[i+1];
            }
        }
    }
    cout<<ans<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}